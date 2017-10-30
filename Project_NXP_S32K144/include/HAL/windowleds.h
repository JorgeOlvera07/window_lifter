/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.x $
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
 * $Log: windowleds.h  $
  ============================================================================*/
#ifndef WINDOWLEDS_H
#define WINDOWLEDS_H

/* Includes */
/*============================================================================*/
#include "MAL/gpio.h"


/* Defines */
/*============================================================================*/
#define WINDOW_LED1 PTC7
#define WINDOW_LED2 PTB17
#define WINDOW_LED3 PTB14
#define WINDOW_LED4 PTB15
#define WINDOW_LED5 PTB16
#define WINDOW_LED6 PTC3
#define WINDOW_LED7 PTE16
#define WINDOW_LED8 PTE15
#define WINDOW_LED9 PTE14
#define WINDOW_LED10 PTE13

#define  WINDOW_PTB PTB
#define  WINDOW_PTC PTC
#define  WINDOW_PTD PTD
#define  WINDOW_PTE PTE



#define UP_Indicator PTD0 // Blue Led indicator UP
#define DOWN_Indicator PTD16 // Green Led indicator DOWN

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void windowleds_void_config_Led_Port(S_GPIO_Type *PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux);
void windowleds_void_openBit_Window(S_GPIO_Type *PT, T_UWORD numbit);
void windowleds_void_closeBit_Window(S_GPIO_Type *PT, T_UWORD numbit);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
