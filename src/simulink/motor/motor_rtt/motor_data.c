/*
 * File: motor_data.c
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

/* Block parameters (auto storage) */
P_motor_T motor_P = {
  4U,                                  /* Computed Parameter: Left_high_p1
                                        * Referenced by: '<S1>/Left_high'
                                        */
  2U,                                  /* Computed Parameter: Left_high_p2
                                        * Referenced by: '<S1>/Left_high'
                                        */
  255U,                                /* Computed Parameter: Left_high_p3
                                        * Referenced by: '<S1>/Left_high'
                                        */
  17U,                                 /* Computed Parameter: Left_low_p1
                                        * Referenced by: '<S1>/Left_low'
                                        */
  2U,                                  /* Computed Parameter: Left_low_p2
                                        * Referenced by: '<S1>/Left_low'
                                        */
  255U,                                /* Computed Parameter: Left_low_p3
                                        * Referenced by: '<S1>/Left_low'
                                        */
  23U,                                 /* Computed Parameter: Right_high_p1
                                        * Referenced by: '<S1>/Right_high'
                                        */
  2U,                                  /* Computed Parameter: Right_high_p2
                                        * Referenced by: '<S1>/Right_high'
                                        */
  255U,                                /* Computed Parameter: Right_high_p3
                                        * Referenced by: '<S1>/Right_high'
                                        */
  24U,                                 /* Computed Parameter: Right_low_p1
                                        * Referenced by: '<S1>/Right_low'
                                        */
  2U,                                  /* Computed Parameter: Right_low_p2
                                        * Referenced by: '<S1>/Right_low'
                                        */
  255U,                                /* Computed Parameter: Right_low_p3
                                        * Referenced by: '<S1>/Right_low'
                                        */
  27U,                                 /* Computed Parameter: EN_Left_p1
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  2U,                                  /* Computed Parameter: EN_Left_p2
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  255U,                                /* Computed Parameter: EN_Left_p3
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  22U,                                 /* Computed Parameter: EN_Right_p1
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  2U,                                  /* Computed Parameter: EN_Right_p2
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  255U,                                /* Computed Parameter: EN_Right_p3
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  0U,                                  /* Expression: pinName
                                        * Referenced by: '<S1>/Left_high'
                                        */
  0U,                                  /* Expression: pinName
                                        * Referenced by: '<S1>/Left_low'
                                        */
  0U,                                  /* Expression: pinName
                                        * Referenced by: '<S1>/Right_high'
                                        */
  0U,                                  /* Expression: pinName
                                        * Referenced by: '<S1>/Right_low'
                                        */
  0U,                                  /* Expression: pinName
                                        * Referenced by: '<S1>/EN_Left'
                                        */
  0U,                                  /* Expression: pinName
                                        * Referenced by: '<S1>/EN_Right'
                                        */
  0,                                   /* Computed Parameter: Constant_Value
                                        * Referenced by: '<Root>/Constant'
                                        */
  1,                                   /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<Root>/Constant2'
                                        */
  0,                                   /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<Root>/Constant4'
                                        */
  0                                    /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<Root>/Constant5'
                                        */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
