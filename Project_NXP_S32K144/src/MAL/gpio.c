/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: gpio.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    MAL file to initialize and configure the gpio                             */
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
/* Olvera Jorge      |           5        | MAL file to initialize          */
/* Archundia Luis    |           5        | and configure the gpio            */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: gpio.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/
#include "MAL/gpio.h"


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
