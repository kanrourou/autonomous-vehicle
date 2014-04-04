/*
 * File: motor.h
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

#ifndef RTW_HEADER_motor_h_
#define RTW_HEADER_motor_h_
#ifndef motor_COMMON_INCLUDES_
# define motor_COMMON_INCLUDES_
#include <float.h>
#include <string.h>
#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_gpio_lct.h"
#endif                                 /* motor_COMMON_INCLUDES_ */

#include "motor_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Parameters (auto storage) */
struct P_motor_T_ {
  uint32_T Left_high_p1;               /* Computed Parameter: Left_high_p1
                                        * Referenced by: '<S1>/Left_high'
                                        */
  uint32_T Left_high_p2;               /* Computed Parameter: Left_high_p2
                                        * Referenced by: '<S1>/Left_high'
                                        */
  uint32_T Left_high_p3;               /* Computed Parameter: Left_high_p3
                                        * Referenced by: '<S1>/Left_high'
                                        */
  uint32_T Left_low_p1;                /* Computed Parameter: Left_low_p1
                                        * Referenced by: '<S1>/Left_low'
                                        */
  uint32_T Left_low_p2;                /* Computed Parameter: Left_low_p2
                                        * Referenced by: '<S1>/Left_low'
                                        */
  uint32_T Left_low_p3;                /* Computed Parameter: Left_low_p3
                                        * Referenced by: '<S1>/Left_low'
                                        */
  uint32_T Right_high_p1;              /* Computed Parameter: Right_high_p1
                                        * Referenced by: '<S1>/Right_high'
                                        */
  uint32_T Right_high_p2;              /* Computed Parameter: Right_high_p2
                                        * Referenced by: '<S1>/Right_high'
                                        */
  uint32_T Right_high_p3;              /* Computed Parameter: Right_high_p3
                                        * Referenced by: '<S1>/Right_high'
                                        */
  uint32_T Right_low_p1;               /* Computed Parameter: Right_low_p1
                                        * Referenced by: '<S1>/Right_low'
                                        */
  uint32_T Right_low_p2;               /* Computed Parameter: Right_low_p2
                                        * Referenced by: '<S1>/Right_low'
                                        */
  uint32_T Right_low_p3;               /* Computed Parameter: Right_low_p3
                                        * Referenced by: '<S1>/Right_low'
                                        */
  uint32_T EN_Left_p1;                 /* Computed Parameter: EN_Left_p1
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  uint32_T EN_Left_p2;                 /* Computed Parameter: EN_Left_p2
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  uint32_T EN_Left_p3;                 /* Computed Parameter: EN_Left_p3
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  uint32_T EN_Right_p1;                /* Computed Parameter: EN_Right_p1
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  uint32_T EN_Right_p2;                /* Computed Parameter: EN_Right_p2
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  uint32_T EN_Right_p3;                /* Computed Parameter: EN_Right_p3
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  uint8_T Left_high_p4;                /* Expression: pinName
                                        * Referenced by: '<S1>/Left_high'
                                        */
  uint8_T Left_low_p4;                 /* Expression: pinName
                                        * Referenced by: '<S1>/Left_low'
                                        */
  uint8_T Right_high_p4;               /* Expression: pinName
                                        * Referenced by: '<S1>/Right_high'
                                        */
  uint8_T Right_low_p4;                /* Expression: pinName
                                        * Referenced by: '<S1>/Right_low'
                                        */
  uint8_T EN_Left_p4;                  /* Expression: pinName
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  uint8_T EN_Right_p4;                 /* Expression: pinName
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  boolean_T Constant_Value;            /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  boolean_T Constant2_Value;           /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  boolean_T Constant4_Value;           /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  boolean_T Constant5_Value;           /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_motor_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (auto storage) */
extern P_motor_T motor_P;

/* Model entry point functions */
extern void motor_initialize(void);
extern void motor_output(void);
extern void motor_update(void);
extern void motor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_motor_T *const motor_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'motor'
 * '<S1>'   : 'motor/motor_comtrol'
 */
#endif                                 /* RTW_HEADER_motor_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
