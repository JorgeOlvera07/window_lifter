/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: mal_gpio.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    MAL file to initialize and configure the gpio.

    * Changed name of file in order to comply with naming convention
      standards - 03/11/2017                                          
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
/*    Author         |      Version       |       Description                 */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |         5          | APP file to control gpio ports    */
/* Archundia Luis    |         5          | APP file to control gpio ports    */
/* Luis Archundia    |         6          | File name modified to comply with */
/*		     |	                  | naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: mal_gpio.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/
#include "MAL/mal_gpio.h"


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
void gpio_void_config_Pin_Out(S_GPIO_Type* PT, T_UWORD numbit){

PT->PDDR |= 1<<numbit;


}

void gpio_void_config_Pin_Mux(S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux){

	PORT->PCR[numbit] = mux; //0x00000100;

}

void gpio_void_config_Pin_Int(S_GPIO_Type* PT, T_UWORD numbit){

	PT->PDDR &= ~(1<<numbit);
}


void gpio_void_io_Set_Pin(S_GPIO_Type* PT,T_UWORD numbit){
	PT-> PSOR |= 1<<numbit;
}

void gpio_void_io_Clear_Pin(S_GPIO_Type* PT,T_UWORD numbit){
	PT-> PCOR |= 1<<numbit;
}

T_UBYTE gpio_T_UBYTE_io_GetValue_Pin(S_GPIO_Type* PT,T_UWORD numbit){

	if (PT->PDIR & (1<<numbit)){return 1;}
	else{
		return 0;
	}
}

void gpio_void_clearFlag_interrPin(S_PORT_Type * pPORT,T_UWORD mask ){
	pPORT->ISFR=mask;
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
