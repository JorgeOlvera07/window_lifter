/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: windowcontrol.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
   APP file to control the window
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
/* Olvera Jorge        |           5        | APP file to control             */
/* Archundia Luis      |           5        | the window                      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: windowcontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "APP/windowcontrol.h"


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
void wc_void_ControlWindowUp (T_UBYTE * percent){


	switch ((*percent)){

		case 1: windowleds_void_openBit_Window(WINDOW_PTC,WINDOW_LED1); /* clear Output on port D16 (on) */   break;
		case 2: windowleds_void_openBit_Window(WINDOW_PTB,WINDOW_LED2); /* clear Output on port D16 (on) */   break;
		case 3: windowleds_void_openBit_Window(WINDOW_PTB,WINDOW_LED3); /* clear Output on port D16 (on) */   break;
		case 4: windowleds_void_openBit_Window(WINDOW_PTB,WINDOW_LED4); /* clear Output on port D16 (on) */   break;
		case 5: windowleds_void_openBit_Window(WINDOW_PTB,WINDOW_LED5); /* clear Output on port D16 (on) */   break;
		case 6: windowleds_void_openBit_Window(WINDOW_PTC,WINDOW_LED6); /* clear Output on port D16 (on) */   break;
		case 7: windowleds_void_openBit_Window(WINDOW_PTE,WINDOW_LED7); /* clear Output on port D16 (on) */  break;
		case 8: windowleds_void_openBit_Window(WINDOW_PTE,WINDOW_LED8); /* clear Output on port D16 (on) */  break;
		case 9: windowleds_void_openBit_Window(WINDOW_PTE,WINDOW_LED9); /* clear Output on port D16 (on) */  break;
		case 10: windowleds_void_openBit_Window(WINDOW_PTE,WINDOW_LED10); /* clear Output on port D16 (on) */  break;
		default:
				if(*percent>10){
					*percent=10;
				}
				if(*percent<1){
					*percent=1;
				}
		break;
	}
}


void wc_void_ControlWindowDown (T_UBYTE * percent){

	switch ((*percent)){

		case 1: windowleds_void_closeBit_Window(WINDOW_PTC,WINDOW_LED1); /* set Output on port D16 (off) */   break;
		case 2: windowleds_void_closeBit_Window(WINDOW_PTB,WINDOW_LED2); /* set Output on port D16 (off) */   break;
		case 3: windowleds_void_closeBit_Window(WINDOW_PTB,WINDOW_LED3); /* set Output on port D16 (off) */   break;
		case 4: windowleds_void_closeBit_Window(WINDOW_PTB,WINDOW_LED4); /* set Output on port D16 (off) */   break;
		case 5: windowleds_void_closeBit_Window(WINDOW_PTB,WINDOW_LED5); /* set Output on port D16 (off) */   break;
		case 6: windowleds_void_closeBit_Window(WINDOW_PTC,WINDOW_LED6); /* set Output on port D16 (off) */   break;
		case 7: windowleds_void_closeBit_Window(WINDOW_PTE,WINDOW_LED7); /* set Output on port D16 (off) */  break;
		case 8: windowleds_void_closeBit_Window(WINDOW_PTE,WINDOW_LED8); /* set Output on port D16 (off) */  break;
		case 9: windowleds_void_closeBit_Window(WINDOW_PTE,WINDOW_LED9); /* set Output on port D16 (off) */  break;
		case 10: windowleds_void_closeBit_Window(WINDOW_PTE,WINDOW_LED10); /* set Output on port D16 (off) */  break;
		default:
			if(*percent>10){
				*percent=10;
			}
			if(*percent<1){
				*percent=1;
			}
		break;
	}
}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
