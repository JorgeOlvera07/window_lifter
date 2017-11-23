/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowleds.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    HAL file to initialize the window�s leds
*/
/*============================================================================*/
/* COPYRIGHT (C) CONTINENTAL AUTOMOTIVE 2014                                  */
/* AUTOMOTIVE GROUP, Interior Division, Body and Security                     */
/* ALL RIGHTS RESERVED                                                        */
/*                                                                            */
/* The reproduction, transmission, or use of this document or its content is  */
/* not permitted without express written authority. Offenders will be liable  */
/* for damages.                                                               */
/* All rights, including rights created by patent grant or registration of a  */
/* utility model or design, are reserved.                                     */
/*                                                                            */
/*============================================================================*/
/*============================================================================*/
/*                    REUSE HISTORY - taken over from                         */
/*============================================================================*/
/*    Author           |      Version       |       Description               */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |           5        | HAL file to initialize            */
/* Archundia Luis    |           5        | the window�s leds                 */
/* Olvera Jorge      |         6          | File name modified to comply with */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: windowleds.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "HAL/hal_windowleds.h"
//#include "MAL/gpio.h"



/* Constants and types  */
/*============================================================================*/



/* Variables */
/*============================================================================*/



/* Private functions prototypes */
/*============================================================================*/



/* Inline functions */
/*============================================================================*/




/* Private functions */
/*============================================================================*/


/* Exported functions */
/*============================================================================*/
void windowleds_void_config_Led_Port(S_GPIO_Type* PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux){

	gpio_void_config_Pin_Out(PT,numbit);
	gpio_void_config_Pin_Mux(PORT,numbit, mux);

}

void windowleds_void_openBit_Window(S_GPIO_Type* PT, T_UWORD numbit){
	gpio_void_io_Set_Pin(PT,numbit);
}

void windowleds_void_closeBit_Window(S_GPIO_Type* PT, T_UWORD numbit){
	gpio_void_io_Clear_Pin(PT,numbit);
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
