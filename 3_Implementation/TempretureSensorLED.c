/**
 * @file TempretureSensorLED.c
 * @author Sonali Likhar
 * @brief A program for Heat control system.
 * @version 0.1
 * @date 2021-12-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 */

#include <avr/io.h>
#include <util/delay.h>
#include "TempretureSensorLED.h"

/**
 * @brief A function to operate the button and heater sensor
 * 
 */
void Tempreture_LED_Init()
{
SET_LED_AS_OUTPUT; //set led as output port
SET_BUTTON_AS_INPUT; //clear bit 6 of DDR B
PULLUP_BUTTON; //Set bit 6 of Port B
SET_HEATER_AS_INPUT; //clear bit 7 of DDR B
PULLUP_HEATER;//Set bit 7 of DDR B

}
