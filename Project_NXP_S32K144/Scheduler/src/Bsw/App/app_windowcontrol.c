/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_windowcontrol.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
   APP file to control the window.

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
/* Olvera Jorge      |           5        | APP file to control the indicators*/
/* Archundia Luis    |           5        | APP file to control the indicators*/
/* Luis Archundia    |           6        | File name modified to comply with */
/*		     |	                  | naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_windowcontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "app_windowcontrol.h"


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
void wc_void_ControlWindowUp (T_UBYTE * lpub_WindowLevel){


	switch ((*lpub_WindowLevel)){

		case 1: windowleds_void_openBit_Window(PORTCH_C,WINDOW_LED1); /* clear Output on port D16 (on) */   break;
		case 2: windowleds_void_openBit_Window(PORTCH_B,WINDOW_LED2); /* clear Output on port D16 (on) */   break;
		case 3: windowleds_void_openBit_Window(PORTCH_B,WINDOW_LED3); /* clear Output on port D16 (on) */   break;
		case 4: windowleds_void_openBit_Window(PORTCH_B,WINDOW_LED4); /* clear Output on port D16 (on) */   break;
		case 5: windowleds_void_openBit_Window(PORTCH_B,WINDOW_LED5); /* clear Output on port D16 (on) */   break;
		case 6: windowleds_void_openBit_Window(PORTCH_C,WINDOW_LED6); /* clear Output on port D16 (on) */   break;
		case 7: windowleds_void_openBit_Window(PORTCH_E,WINDOW_LED7); /* clear Output on port D16 (on) */  break;
		case 8: windowleds_void_openBit_Window(PORTCH_E,WINDOW_LED8); /* clear Output on port D16 (on) */  break;
		case 9: windowleds_void_openBit_Window(PORTCH_E,WINDOW_LED9); /* clear Output on port D16 (on) */  break;
		case 10: windowleds_void_openBit_Window(PORTCH_E,WINDOW_LED10); /* clear Output on port D16 (on) */  break;
		default:
				if(*lpub_WindowLevel>10){
					*lpub_WindowLevel=10;
				}
				if(*lpub_WindowLevel<1){
					*lpub_WindowLevel=1;
				}
		break;
	}
}


void wc_void_ControlWindowDown (T_UBYTE * lpub_WindowLevel){

	switch ((*lpub_WindowLevel)){

		case 1: windowleds_void_closeBit_Window(PORTCH_C,WINDOW_LED1); /* set Output on port D16 (off) */   break;
		case 2: windowleds_void_closeBit_Window(PORTCH_B,WINDOW_LED2); /* set Output on port D16 (off) */   break;
		case 3: windowleds_void_closeBit_Window(PORTCH_B,WINDOW_LED3); /* set Output on port D16 (off) */   break;
		case 4: windowleds_void_closeBit_Window(PORTCH_B,WINDOW_LED4); /* set Output on port D16 (off) */   break;
		case 5: windowleds_void_closeBit_Window(PORTCH_B,WINDOW_LED5); /* set Output on port D16 (off) */   break;
		case 6: windowleds_void_closeBit_Window(PORTCH_C,WINDOW_LED6); /* set Output on port D16 (off) */   break;
		case 7: windowleds_void_closeBit_Window(PORTCH_E,WINDOW_LED7); /* set Output on port D16 (off) */  break;
		case 8: windowleds_void_closeBit_Window(PORTCH_E,WINDOW_LED8); /* set Output on port D16 (off) */  break;
		case 9: windowleds_void_closeBit_Window(PORTCH_E,WINDOW_LED9); /* set Output on port D16 (off) */  break;
		case 10: windowleds_void_closeBit_Window(PORTCH_E,WINDOW_LED10); /* set Output on port D16 (off) */  break;
		default:
			if(*lpub_WindowLevel>10){
				*lpub_WindowLevel=10;
			}
			if(*lpub_WindowLevel<1){
				*lpub_WindowLevel=1;
			}
		break;
	}
}

void wc_WindowDown(T_UWORD *lpub_Time){

	if(rub_WindowLevel>=1){
		if((*lpub_Time)>=400){
			wc_void_ControlWindowDown(&rub_WindowLevel);
			rub_WindowLevel--;
			(*lpub_Time)=0;
		}

	}

}

void wc_WindowUp(T_UWORD *lpub_Time){

	if(rub_WindowLevel<10){
		if((*lpub_Time)>=400){
			rub_WindowLevel++;
			wc_void_ControlWindowUp(&rub_WindowLevel);
			(*lpub_Time)=0;
		}

	}

}



 /* Notice: the file ends with a blank new line to avoid compiler warnings */
