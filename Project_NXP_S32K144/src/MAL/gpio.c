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
void config_Pin_Out(GPIO_Type* PT,int numbit){

PT->PDDR |= 1<<numbit;


}

void config_Pin_Mux(PORT_Type * PORT,int numbit, int mux){

	PORT->PCR[numbit] = mux; //0x00000100;

}

void config_Pin_Int(GPIO_Type* PT, int numbit){

	PT->PDDR &= ~(1<<numbit);
}


void io_Set_Pin(GPIO_Type* PT,int numbit){
	PT-> PSOR |= 1<<numbit;
}

void io_Clear_Pin(GPIO_Type* PT,int numbit){
	PT-> PCOR |= 1<<numbit;
}

unsigned char io_GetValue_Pin(GPIO_Type* PT,int numbit){

	if (PT->PDIR & (1<<numbit)){return 1;}
	else{
		return 0;
	}
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
