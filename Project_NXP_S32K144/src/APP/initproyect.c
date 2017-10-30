/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: initproyect.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to initialize all project
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
/* Olvera Jorge      |           5        | APP file to initialize            */
/* Archundia Luis    |           5        | all project                       */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: initproyect.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "APP/initproyect.h"



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
void ip_void_EnablePCC (void){

	enableports_void_enable_PCC_Port(PCCPORTB); /* Enable clock for PORT B */
	enableports_void_enable_PCC_Port(PCCPORTC); /* Enable clock for PORT C */
	enableports_void_enable_PCC_Port(PCCPORTD); /* Enable clock for PORT D */
	enableports_void_enable_PCC_Port(PCCPORTE); /* Enable clock for PORT E */

}

/* Enable desired interrupts and priorities */
void ip_void_EnableNVIC (void){
	enablenvic_void_NVIC_init_IRQs();
}


void ip_void_WindowInit (void){

	windowleds_void_config_Led_Port(PTC,PORTC,WINDOW_LED1,0x00000100);
	windowleds_void_config_Led_Port(PTB,PORTB,WINDOW_LED2,0x00000100);
	windowleds_void_config_Led_Port(PTB,PORTB,WINDOW_LED3,0x00000100);
	windowleds_void_config_Led_Port(PTB,PORTB,WINDOW_LED4,0x00000100);
	windowleds_void_config_Led_Port(PTB,PORTB,WINDOW_LED5,0x00000100);
	windowleds_void_config_Led_Port(PTC,PORTC,WINDOW_LED6,0x00000100);
	windowleds_void_config_Led_Port(PTE,PORTE,WINDOW_LED7,0x00000100);
	windowleds_void_config_Led_Port(PTE,PORTE,WINDOW_LED8,0x00000100);
	windowleds_void_config_Led_Port(PTE,PORTE,WINDOW_LED9,0x00000100);
	windowleds_void_config_Led_Port(PTE,PORTE,WINDOW_LED10,0x00000100);

}


void ip_void_IndicatorsInit (void){

	indicator_void_config_indicator(INDICATOR_PTD,PORTD,UP_Indicator,0x00000100);
	indicator_void_config_indicator(INDICATOR_PTD,PORTD,DOWN_Indicator,0x00000100);
	indicator_void_set_indicator(INDICATOR_PTD,UP_Indicator );
	indicator_void_set_indicator(INDICATOR_PTD,DOWN_Indicator);

}

void ip_void_ButtonsInit (void){

buttons_void_config_Buttons_Port(Button_PTC,PORTC,DOWN_Button,0x00000110);
buttons_void_config_Buttons_Port(Button_PTC,PORTC,UP_Button,0x00000110);
buttons_void_config_Buttons_Port(PTE,PORTE,PTE1,0x10C0110);

}


void ip_void_LPIT0Timer_init (void) {

	timer_void_initLPIT0_Timer(PCC, LPIT0,6, PCC_PCCn_CGC_MASK,  0x00000001);

}

void ip_void_EnableClocksandModes (void){

	enableclc_vod_init_ClocksandModes();
}

void ip_void_DisableWatchdog(){
	initwd_void_initWatchdog(WDOG,maskcnt,masktoval,maskcs);
}


 /* Notice: the file ends with a blank new line to avoid compiler warnings */
