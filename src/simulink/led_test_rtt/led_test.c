/*
 * File: led_test.c
 *
 * Code generated for Simulink model 'led_test'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.5 (R2013b) 08-Aug-2013
 * TLC version                    : 8.5 (Aug  6 2013)
 * C/C++ source code generated on : Sat Nov 23 00:14:04 2013
 *
 * Target selection: realtime.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "led_test.h"
#include "led_test_private.h"
#include "led_test_dt.h"

/* Real-time model */
RT_MODEL_led_test_T led_test_M_;
RT_MODEL_led_test_T *const led_test_M = &led_test_M_;

/* Model output function */
void led_test_output(void)
{
  /* S-Function (linuxLedWrite_sfcn): '<Root>/LED' */
  MW_ledWrite(led_test_P.LED_p1, FALSE);
}

/* Model update function */
void led_test_update(void)
{
  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(led_test_M)!=-1) &&
        !((rtmGetTFinal(led_test_M)-led_test_M->Timing.taskTime0) >
          led_test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(led_test_M, "Simulation finished");
    }

    if (rtmGetStopRequested(led_test_M)) {
      rtmSetErrorStatus(led_test_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  led_test_M->Timing.taskTime0 =
    (++led_test_M->Timing.clockTick0) * led_test_M->Timing.stepSize0;
}

/* Model initialize function */
void led_test_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)led_test_M, 0,
                sizeof(RT_MODEL_led_test_T));
  rtmSetTFinal(led_test_M, 10.0);
  led_test_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  led_test_M->Sizes.checksums[0] = (937502874U);
  led_test_M->Sizes.checksums[1] = (1171137670U);
  led_test_M->Sizes.checksums[2] = (249206676U);
  led_test_M->Sizes.checksums[3] = (55977886U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    led_test_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(led_test_M->extModeInfo,
      &led_test_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(led_test_M->extModeInfo, led_test_M->Sizes.checksums);
    rteiSetTPtr(led_test_M->extModeInfo, rtmGetTPtr(led_test_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    led_test_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  /* Start for S-Function (linuxLedWrite_sfcn): '<Root>/LED' */
  MW_ledInit(led_test_P.LED_p1);
}

/* Model terminate function */
void led_test_terminate(void)
{
  /* Terminate for S-Function (linuxLedWrite_sfcn): '<Root>/LED' */
  MW_ledTerminate(led_test_P.LED_p1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
