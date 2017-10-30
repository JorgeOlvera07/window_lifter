/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: buttonscontrol.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to control the  buttons
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
/* Olvera Jorge      |           5        | APP file to control             */
/* Archundia Luis    |           5        | the buttons                       */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: buttonscontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "APP/buttonscontrol.h"


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
T_UBYTE bc_T_UBYTE_statusButt_Up(){

	return (buttons_T_UBYTE_get_Button_Value(Button_PTC,UP_Button ));
}

T_UBYTE bc_T_UBYTE_statusButt_Down(){

	return (buttons_T_UBYTE_get_Button_Value(Button_PTC,DOWN_Button ));

}

void bc_void_clearFlag_AntiPinch(){
	buttons_void_clearFlag_antipinch(PORTE,PORT_ISFR_ISF_MASK);
}

 /* Notice: the file ends with a blank new line to avoid compiler warnings */
