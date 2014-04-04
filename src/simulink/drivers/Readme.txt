DEVELOPING SIMULINK DEVICE DRIVERS BLOCKS:
------------------------------------------

This package contains a guide that explains how to develop device driver blocks (blocks that perform target specific functions such as, for example, analog or digital input or output, or talking to specific hardware devices, when executed on a target platform). 

The Simulink Support package for Arduino is used to build the examples, but the method is the same for any other supported target.


Contents:
---------

Readme.txt      	This file
license.txt		License File

DriverGuide.pdf         Guide for developing device driver blocks

output_slsp.mdl         Output device driver block example (digital output, aka digital write)
input_slsp.mdl          Input device driver block example (digital input, aka digital read)

encoder_slsp.mdl        Encoder read example
encoder_slsp_mega.mdl	Example model containing three encoder read blocks

afmotor_slsp.mdl        DC and Stepper motor driver blocks for the Adafruit Motor Shield


Suggestions:
------------

Before running the model in simulation you need to open the S-Function Builder blocks and click on "build" to generate the MEX-files (this requires that you have a compiler installed, see http://www.mathworks.com/support/compilers/current_release/). 

After this step, to run the models on an Arduino board you should make sure that the simulink support package is installed (just type "targetinstaller" on the matlab command line). Also go to "Tools -> Run on Target Hardware -> Prepare to Run" or "Tools -> Run on Target Hardware -> Options..." to make sure that the settings correspond to your version of Arduino board.

To run the motor shield blocks on the Arduino be sure to click on the "Double Click for Explanation" block in the afmotor_slsp model and follow the instructions therein.

If you are writing a driver, especially one that uses external libraries, please have a look at the guide first (especially the last 3 or 4 pages), and also look at the encoder and afmotor examples to see how some problems were solved in those cases.


Version:
--------

Version 1.4, 23-Apr-2013, Copyright 2013, The MathWorks, Inc.


