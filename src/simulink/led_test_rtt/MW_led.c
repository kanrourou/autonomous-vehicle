// Copyright 2012 The MathWorks, Inc.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "MW_led.h"

// Local defines
#define SYSFS_LED_DIR          "/sys/class/leds/"
#define MAX_LED_FNAME           100
//#define _DEBUG (1)

typedef struct {
    int fd;                     // File descriptor for the LED
    uint8_T fname[80];           // Linux file name for the LED
} LED_info;

int numLed = 0;                 // Number of LEDs used
LED_info *ledInfo = NULL;       // Structure array holding LED info



// Open LED device file
int ledOpen(const uint8_T *deviceFile)
{
    int fd;
    char buf[MAX_LED_FNAME] = SYSFS_LED_DIR;
    char trigger[8] = "none";
    ssize_t bytesWritten;
    
    // Change trigger to "none"
    strcat(buf, deviceFile);
    strcat(buf, "/trigger");
    fd = open(buf, O_WRONLY | O_NONBLOCK);
    if (fd < 0) {
#ifdef _DEBUG
        fprintf(stdout, "File = %s\n", buf);
        perror("LED/trigger/fd_open");
#endif
    }
    bytesWritten = write(fd, trigger, strlen(trigger) + 1);
    close(fd);
    
    // Open brightness file
    strcpy(buf, SYSFS_LED_DIR);
    strcat(buf, deviceFile);
    strcat(buf, "/brightness");
    fd = open(buf, O_WRONLY | O_NONBLOCK);
    if (fd < 0) {
#ifdef _DEBUG
        fprintf(stdout, "File = %s\n", buf);
        perror("LED/brigtness/fd_open");
#endif
    }
    
    return fd;
}

// Return resources used for LED
void MW_ledExit(void)
{
    if (ledInfo != NULL) {
        free(ledInfo);
    }
    exit(EXIT_FAILURE);
}

// Return a pointer to LED info structure
LED_info *MW_getLedInfo(const uint8_T *deviceFile)
{
    int i;
    LED_info *ptr = NULL;
    
    for (i = 0; i < numLed; i++) {
        if (strcmp(ledInfo[i].fname, deviceFile) == 0) {
            ptr = &ledInfo[i];
            break;
        }
    }
    return ptr;
}

// Initialize LED module
void MW_ledInit(const uint8_T *deviceFile)
{
    LED_info *ledInfoPtr;
    
    ledInfo = realloc(ledInfo, (numLed + 1) * sizeof(LED_info));
    if (ledInfo == NULL) {
        fprintf(stderr, "Error allocating memory for LED %s.\n", deviceFile);
        MW_ledExit();
    }
    ledInfoPtr = ledInfo + numLed;
    
    //Fill in LED info structure for the LED module
    ledInfoPtr->fd = -1;
    strcpy(&(ledInfoPtr->fname[0]), deviceFile);
    numLed++;
    
    //Open LED device file for use
    ledInfoPtr->fd = ledOpen(ledInfoPtr->fname);
    if (ledInfoPtr->fd < 0) {
        fprintf(stderr, "Error opening LED device file %s.\n",
                ledInfoPtr->fname);
        MW_ledExit();
    }
}

// Close LED module
void MW_ledTerminate(const uint8_T *deviceFile)
{
    LED_info *ledInfoPtr = NULL;
    static int32_T numClosedLed = 0;
    
    // Get LED information pointer and close the LED file descriptor
    ledInfoPtr = MW_getLedInfo(deviceFile);
    if (ledInfoPtr == NULL) {
        return;
    }
    if (close(ledInfoPtr->fd) < 0) {
        fprintf(stderr, "Error closing LED device file.\n");
    }
    numClosedLed++;
    if ((numClosedLed == numLed) && !ledInfo) {
        free(ledInfo);
    }
}

// Write value to given LED
void MW_ledWrite(const uint8_T *deviceFile, boolean_T value)
{
    LED_info *ledInfoPtr = NULL;
    ssize_t bytesWritten;
    
    // Get LED information pointer
    ledInfoPtr = MW_getLedInfo(deviceFile);
    lseek(ledInfoPtr->fd, 0, SEEK_SET);
    if (value) {
        bytesWritten = write(ledInfoPtr->fd, "1", 1);
    }
    else {
        bytesWritten = write(ledInfoPtr->fd, "0", 1);
    }
}

//[EOF]
