/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: buttons.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \HAL file for button and pin configuration.
    
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
/*  AUTHOR          |  VERSION    |               DESCRIPTION                 */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia  |     5       | HAL file for button and pin configuration.*/
/*  Jorge Olvera    |     5       | HAL file for button and pin configuration.*/
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: buttons.h  $
  ============================================================================*/
#ifndef BUTTONS_H
#define BUTTONS_H

/* Includes */
/*============================================================================*/
#include "MAL/mal_gpio.h"


/* Defines */
/*============================================================================*/
#define UP_Button PTC12
#define DOWN_Button PTC13
#define ANTIPINCH_BUTTON 1
#define Button_PTC PTC

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void buttons_void_config_Buttons_Port(S_GPIO_Type* PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux);
T_UBYTE buttons_T_UBYTE_get_Button_Value(S_GPIO_Type* PT,T_UWORD numbit);
void buttons_void_clearFlag_antipinch(S_PORT_Type * pPORT,T_UWORD mask);


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
