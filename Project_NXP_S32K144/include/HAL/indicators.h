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
 * $Log: indicators.h  $
  ============================================================================*/
#ifndef INDICATORS_H
#define INDICATORS_H

/* Includes */
/*============================================================================*/
#include "MAL/gpio.h"

/* Defines */
/*============================================================================*/
#define UP_Indicator PTD0
#define DOWN_Indicator PTD16
#define  INDICATOR_PTD PTD


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void indicator_void_config_indicator(S_GPIO_Type* PT, S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux);
void indicator_void_set_indicator(S_GPIO_Type* PT, T_UWORD numbit);
void indicator_void_clear_indicator(S_GPIO_Type* PT, T_UWORD numbit);
#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
