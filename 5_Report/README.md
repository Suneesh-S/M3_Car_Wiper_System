# Abstract

A wiper is a vital component that cleans windscreen of a car. Previously, the wipers had to be manually activated by adjusting the frequency. The operation of increasing wiper speed is varied as a result of the outcomes. The project's purpose is to give automated transmission to older cars in order to improve their systems. wiping system, to improve the system by including a sensor and actuator, and to design a basic programme that could operate the system completely.The principle of operation of this proposed wiper system is similar to those of other conventional wipers now in use. Regardless, To remove water from the windscreen, this system will be upgraded to an automatic control system that will use a Peripheral Interface.

# Requirements
## Introduction
 * A wiper is used to clean car glass that has been exposed to dirt or rainwater. Wipers are usually mounted to the front and back of the vehicle. The driver's view will not be obstructed by the wiper, allowing them to see clearly to the front and rear.
 * Speed of the wiper can be controlled by STM324xx microcontroller with the help of GPIO,Interrupt,Timers.

## Research
### Car Wiper System...
* To implement the project,the major component need is STM32F4O7VG Microcontroller Board
* From research,its bit hard to implement the car wiper system in computer without hardware components.So,instead of using motor and wiper arms,the leds of the stm32 discovery board is used to show the function of wiper.

## Features of STM32F407VG MICROCONTROLLER
* This mcu has various features, like it can provide Low-power operation
* Up to 17 timers: up to twelve 16-bit and two 32-bit timers up to 168 MHz, each with up to 4 IC/OC/PWM

## Defining Our System
* According to WHO, more than 1.25 million people die every year because of road crashes and mostly in rainy seasons. People end up dying because of small mistakes. Here we have forwarded an attempt to reduce that number. The project is especially suited for car.


## SWOT ANALYSIS
![image](https://github.com/Suneesh-S/M2_Automatic-Exhaust-Fan/blob/038d15ecd7fb61d6a0f9cf42dbd3ece575f59a97/1_Requirements/SWOT%20analysis.png)

# 4W&#39;s and 1&#39;H

## Who:

* All the automobile car drivers can use this device.

## What:

* Car wiper system can be used to clean the dirt and rainwater of the car glass.

## When:

* During the step-In training, this is the final project assessment and development started on 26th April.

## Where:

* This can be used in all automobile cars.

## How:

* Users can use this device to ease their work even more comfortable.

# Detail requirements
## High Level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|HLR-1| User shall be able to select the different inputs the user need to get values when led blinks |Implemented|
|HLR-2| user shall be able to get different speed |Implemented|
|HLR-1| User shall be able to turn off the ignition LED |Implemented|



##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|LLR-1| User shall be able to click the start button |Implemented|
|LLR-2| User shall be able turn LED On |Implemented|

# Software Requirements

* STM32 CUBE IDE
* QEMU

# COMPONENTS
* STM32F4O7VG MICROCONTROLLER BOARD


# Working Principle
Assume that the automobile is the microcontroller. If the button is hit, the first led (red) will turn on, Clicking again  the wiper will start, and the second led (blue) will turn on for a desired rate. If the button is pressed again, the third led (green) will turn on, and the wiper's speed will be increased in comparison to the previous one. The fourth press will turn on the fourth led (orange), and the wiper speed will be increased in accordance with the previous one. The microcontroller (vehicle) is turned off after the fifth click.

# Flow Chart

![image](https://github.com/Suneesh-S/M3_Car_Wiper_System/blob/1c2a5ba9d97d2adbd3feba2907c047a12b38be4d/2_Design/Untitled%20Diagram.drawio.png)

# TEST CASES

## High Level Test Cases
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | STATUS |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| 1 | check if the BUTTON is pressed  | program execution | Microcontroller/Engine starts | LED ON(RED)| PASS |
| 2 | check if the BUTTON is pressed  | program execution | WIPER starts slow speed | LED ON(BLUE)| PASS |
| 3 | check if the BUTTON is pressed  | program execution | WIPER starts moderate speed | LED ON(GREEN)| PASS |
| 4 | check if the BUTTON is pressed  | program execution | WIPER starts good speed | LED ON(ORANGE)| PASS |
| 5 | check if the BUTTON is pressed  | - | Microcontroller/Engine stops | LED TURNED OFF| PASS |



## Low Level Test Cases
| Test ID | Description | Exp.i/p | Exp.o/p | Actual o/p | STATUS |
| --------|:------------|:--------|:--------|:-----------|:-------------|
| 1 | check if the LED works  | program execution | LED Turns ON | LED ON| PASS |
| 2 | check if the BUTTON works | program execution | working | working| PASS |
| 3 | check if the MCU works | program execution | working | working| PASS |

# ENGINE ON STATE
![image](https://github.com/Suneesh-S/M3_Car_Wiper_System/blob/05d4e077c220cd96d72b5add650de535e801ae54/6_Output/Ignition_ON.png)

# Wiper status using LED
![image](https://github.com/Suneesh-S/M3_Car_Wiper_System/blob/97fa957c0b3b45f71ff9261d2357174ee924c5ab/6_Output/Speed1.png)
![image](https://github.com/Suneesh-S/M3_Car_Wiper_System/blob/e0315199ee951e130ea7b0077a352e153e134202/6_Output/Speed2.png)
![image](https://github.com/Suneesh-S/M3_Car_Wiper_System/blob/d48cc0d721d36323718f9f0ce2a7ab13d5dbc56f/6_Output/Speed3.png)

# ENGINE OFF STATE
![image](https://github.com/Suneesh-S/M3_Car_Wiper_System/blob/05b8930659ecb386600158bc632fdaabc2ba04ae/6_Output/Ignition%20OFF.png)
