/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "diag/trace.h"

#include "timer.h"
#include "led.h"

// ----------------------------------------------------------------------------
//
// Standalone STM32F4 led blink sample (trace via DEBUG).
//
// In debug configurations, demonstrate how to print a greeting message
// on the trace device. In release configurations the message is
// simply discarded.
//
// Then demonstrates how to blink a led with 1 Hz, using a
// continuous loop and SysTick delays.
//
// Trace support is enabled by adding the TRACE macro definition.
// By default the trace messages are forwarded to the DEBUG output,
// but can be rerouted to any device or completely suppressed, by
// changing the definitions required in system/src/diag/trace-impl.c
// (currently OS_USE_TRACE_ITM, OS_USE_TRACE_SEMIHOSTING_DEBUG/_STDOUT).
//

// ----- Timing definitions -------------------------------------------------

uint16_t First_TICKS=1000;
uint16_t Second_TICKS=250;
uint16_t Third_TICKS=125;

// ----- main() ---------------------------------------------------------------

// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

int GREEN=12,ORANGE=13,RED=14,BLUE=15;

uint8_t status=0,status1=0,toggle=0;

uint16_t Sec=0,Sec_limit=2000;

void EXTI0_IRQHandler(void);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void wiper_control(int Ticks);

int
main(int argc, char* argv[])
{

  trace_printf("System clock: %u Hz\n", SystemCoreClock);

  timer_start();

  LED_init(BLUE);
  LED_init(GREEN);
  LED_init(ORANGE);
  LED_init(RED);
  Switch_init();


  // Infinite loop
  while (1)
    {

	    if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)){
	    	LED_speed(60);
	    	Sec = Sec+100;
	    	trace_printf("Second%u\n",Sec);

	    }else if(status==1 && status1==1)
	          {
	    	  wiper_control(1000);
              }
	    else{
		  if(status==2  && status1==1){
			  wiper_control(250);
		  }else
		  {
		  if(status==3 && status1==1){
				  wiper_control(125);
			  }
		  }
	  }

    }
}

void EXTI0_IRQHandler(void)
{
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if(GPIO_Pin == GPIO_PIN_0)
    {
    if(Sec>=Sec_limit){
    	HAL_GPIO_TogglePin(GPIOD,GPIO_PIN_14);
       Sec=0;
       status=0;
       status1=!(toggle);
    }
    else
    {
    status++;
    if(status>3)
    {
           	status=1;
    }

      }
    }
}

void wiper_control(int Ticks){

	  LED_ON(BLUE);
	  LED_speed(Ticks);
	  LED_ON(GREEN);
	  LED_speed(Ticks);
	  LED_ON(ORANGE);
	  LED_speed(Ticks);
	  LED_OFF(ORANGE);
	  LED_speed(Ticks);
	  LED_OFF(GREEN);
	  LED_speed(Ticks);
	  LED_OFF(BLUE);
	  LED_speed(Ticks);
	  Sec=0;
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
