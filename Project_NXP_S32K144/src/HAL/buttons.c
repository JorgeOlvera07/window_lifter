/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
 * $Revision: version $
 * $Author: author $
 * $Date: date $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    short description in one sentence end with dot.
    detailed
    multiline
    description of the file
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
/*  DATABASE           |        PROJECT     | FILE VERSION (AND INSTANCE)     */
/*----------------------------------------------------------------------------*/
/*                     |                    |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: filename.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "HAL/buttons.h"
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
void buttons_void_config_Buttons_Port(S_GPIO_Type* PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux){


	gpio_void_config_Pin_Int(PT,numbit);
	gpio_void_config_Pin_Mux(PORT,numbit,mux);  //0x00000110 0xC0110


}

T_UBYTE buttons_T_UBYTE_get_Button_Value(S_GPIO_Type* PT,T_UWORD numbit){

	return (gpio_T_UBYTE_io_GetValue_Pin(PT,numbit));

}

void buttons_void_clearFlag_antipinch(S_PORT_Type * pPORT,T_UWORD mask){
	gpio_void_clearFlag_interrPin(pPORT,mask );
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
