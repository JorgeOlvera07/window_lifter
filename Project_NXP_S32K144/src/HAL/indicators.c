/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: indicators.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    HAL file to initialize the indicators
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
/* Archundia Luis    |           5        | the indicator                     */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: indicators.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "HAL/indicators.h"



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
void indicator_void_config_indicator(S_GPIO_Type* PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux){

	gpio_void_config_Pin_Out(PT,numbit);
	gpio_void_config_Pin_Mux(PORT,numbit, mux);
}

void indicator_void_set_indicator(S_GPIO_Type* PT, T_UWORD numbit){
	gpio_void_io_Set_Pin(PT,numbit);
}

void indicator_void_clear_indicator(S_GPIO_Type* PT, T_UWORD numbit){
	gpio_void_io_Clear_Pin(PT,numbit);
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
