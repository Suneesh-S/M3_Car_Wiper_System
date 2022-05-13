# Requirements
## Introduction
 * A wiper is used to clean car glass that has been exposed to dirt or rainwater. Wipers are usually mounted to the front and back of the vehicle. The driver's view will not be obstructed by the wiper, allowing them to see clearly to the front and rear.
 * Speed of the wiper can be controlled by STM324xx microcontroller with the help of GPIO,Interrupt,Timers.

## Research
### Car Wiper System...
* To implement the project,the major component need is STM32F4O7VG Microcontroller Board
* From research,its bit hard to implement the car wiper system in computer without hardware components.So,instead of using motor and wiper arms,the leds of the stm32 discovery board is used to show the function of wiper.

## Features of STM32F407VG MICROCONTROLLER
* This project has various features, like it can provide air circulating system inside the Kitchen 
* It can reduce the temperature of the kitchen with automatic approach
* It can sense the high rise of temperature and alarm the family
* The cost of the system is less compares to the Electric Chimney


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
|HLR-1| The Exhaust Fan shall be in OFF state till the temperature reaches 30oC |Implemented|
|HLR-2| The Exhaust Fan shall be in ON state when the temperature reaches beyond 30oC. |Implemented|
|HLR-3| The Alarm shall be in ON state when the temperature reaches beyond 70oC. |Implemented|
|HLR-5| user shall be set the temperature at which the Fan operate. |Future|



##  Low level Requirements:

| ID | Description | Status (Implemented/Future)
|:---:|:---:|:---:|
|LLR-1| Sensor shall able to sense the temperature. |Implemented|
|LLR-2| User shall be able to see the temperature of the room. |Implemented|
|LLR-3| System shall able to sense the rise of temperature and sound alarm |Implemented|
|LLR-4| Motor shall vary the speed depends on the temperature to reduce the electricity bill|Future|
