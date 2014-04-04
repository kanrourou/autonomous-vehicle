/*
 * File: motor.c
 *
 * Code generated for Simulink model 'motor'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.5 (R2013b) 08-Aug-2013
 * TLC version                    : 8.5 (Aug  6 2013)
 * C/C++ source code generated on : Sat Nov 30 19:57:35 2013
 *
 * Target selection: realtime.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "motor.h"
#include "motor_private.h"
#include "motor_dt.h"

/* Real-time model */
RT_MODEL_motor_T motor_M_;
RT_MODEL_motor_T *const motor_M = &motor_M_;

/* Model output function */
void motor_output(void)
{
  /* S-Function (linuxGpioWrite_sfcn): '<S1>/Left_high' incorporates:
   *  Constant: '<Root>/Constant'
   */
  MW_gpioWrite(motor_P.Left_high_p1, motor_P.Constant_Value);

  /* S-Function (linuxGpioWrite_sfcn): '<S1>/Left_low' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  MW_gpioWrite(motor_P.Left_low_p1, motor_P.Constant2_Value);

  /* S-Function (linuxGpioWrite_sfcn): '<S1>/Right_high' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  MW_gpioWrite(motor_P.Right_high_p1, motor_P.Constant4_Value);

  /* S-Function (linuxGpioWrite_sfcn): '<S1>/Right_low' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  MW_gpioWrite(motor_P.Right_low_p1, motor_P.Constant5_Value);

  /* S-Function (linuxGpioWrite_sfcn): '<S1>/EN_Left' */
  MW_gpioWrite(motor_P.EN_Left_p1, FALSE);

  /* S-Function (linuxGpioWrite_sfcn): '<S1>/EN_Right' */
  MW_gpioWrite(motor_P.EN_Right_p1, FALSE);
}

/* Model update function */
void motor_update(void)
{
  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(motor_M)!=-1) &&
        !((rtmGetTFinal(motor_M)-motor_M->Timing.taskTime0) >
          motor_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(motor_M, "Simulation finished");
    }

    if (rtmGetStopRequested(motor_M)) {
      rtmSetErrorStatus(motor_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  motor_M->Timing.taskTime0 =
    (++motor_M->Timing.clockTick0) * motor_M->Timing.stepSize0;
}

/* Model initialize function */
void motor_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)motor_M, 0,
                sizeof(RT_MODEL_motor_T));
  rtmSetTFinal(motor_M, -1);
  motor_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  motor_M->Sizes.checksums[0] = (1008116136U);
  motor_M->Sizes.checksums[1] = (3564589615U);
  motor_M->Sizes.checksums[2] = (1322083197U);
  motor_M->Sizes.checksums[3] = (1603772587U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    motor_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(motor_M->extModeInfo,
      &motor_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(motor_M->extModeInfo, motor_M->Sizes.checksums);
    rteiSetTPtr(motor_M->extModeInfo, rtmGetTPtr(motor_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    motor_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Parameters transition table */
    dtInfo.P = &rtPTransTable;
  }

  {
    uint8_T tmp;
    uint8_T tmp_0;
    uint8_T tmp_1;
    uint8_T tmp_2;
    uint8_T tmp_3;
    uint8_T tmp_4;

    /* Start for S-Function (linuxGpioWrite_sfcn): '<S1>/Left_high' */
    tmp_4 = motor_P.Left_high_p4;
    MW_gpioInit(motor_P.Left_high_p1, motor_P.Left_high_p2, motor_P.Left_high_p3,
                &tmp_4);

    /* Start for S-Function (linuxGpioWrite_sfcn): '<S1>/Left_low' */
    tmp_3 = motor_P.Left_low_p4;
    MW_gpioInit(motor_P.Left_low_p1, motor_P.Left_low_p2, motor_P.Left_low_p3,
                &tmp_3);

    /* Start for S-Function (linuxGpioWrite_sfcn): '<S1>/Right_high' */
    tmp_2 = motor_P.Right_high_p4;
    MW_gpioInit(motor_P.Right_high_p1, motor_P.Right_high_p2,
                motor_P.Right_high_p3, &tmp_2);

    /* Start for S-Function (linuxGpioWrite_sfcn): '<S1>/Right_low' */
    tmp_1 = motor_P.Right_low_p4;
    MW_gpioInit(motor_P.Right_low_p1, motor_P.Right_low_p2, motor_P.Right_low_p3,
                &tmp_1);

    /* Start for S-Function (linuxGpioWrite_sfcn): '<S1>/EN_Left' */
    tmp_0 = motor_P.EN_Left_p4;
    MW_gpioInit(motor_P.EN_Left_p1, motor_P.EN_Left_p2, motor_P.EN_Left_p3,
                &tmp_0);

    /* Start for S-Function (linuxGpioWrite_sfcn): '<S1>/EN_Right' */
    tmp = motor_P.EN_Right_p4;
    MW_gpioInit(motor_P.EN_Right_p1, motor_P.EN_Right_p2, motor_P.EN_Right_p3,
                &tmp);
  }
}

/* Model terminate function */
void motor_terminate(void)
{
  /* Terminate for S-Function (linuxGpioWrite_sfcn): '<S1>/Left_high' */
  MW_gpioTerminate(motor_P.Left_high_p1);

  /* Terminate for S-Function (linuxGpioWrite_sfcn): '<S1>/Left_low' */
  MW_gpioTerminate(motor_P.Left_low_p1);

  /* Terminate for S-Function (linuxGpioWrite_sfcn): '<S1>/Right_high' */
  MW_gpioTerminate(motor_P.Right_high_p1);

  /* Terminate for S-Function (linuxGpioWrite_sfcn): '<S1>/Right_low' */
  MW_gpioTerminate(motor_P.Right_low_p1);

  /* Terminate for S-Function (linuxGpioWrite_sfcn): '<S1>/EN_Left' */
  MW_gpioTerminate(motor_P.EN_Left_p1);

  /* Terminate for S-Function (linuxGpioWrite_sfcn): '<S1>/EN_Right' */
  MW_gpioTerminate(motor_P.EN_Right_p1);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
