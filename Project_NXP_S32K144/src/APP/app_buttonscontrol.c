/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: app_buttonscontrol.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    APP file to control the  buttons.

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
/* Olvera Jorge      |           5        | APP file to control the buttons   */
/* Archundia Luis    |           5        | APP file to control the buttons   */
/* Luis Archundia    |           6        | File name modified to comply with */
/*		     |	                  | naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: app_buttonscontrol.c  $
  ============================================================================*/

/* Includes */
/*============================================================================*/
#include "APP/app_buttonscontrol.h"


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
