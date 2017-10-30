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
 * $Log: filename.h  $
  ============================================================================*/
#ifndef GPIO_H
#define GPIO_H

/* Includes */
/*============================================================================*/
#include "S32K144.h"
#include "MAL/namingconventions.h"
/* Defines */
/*============================================================================*/
#define PTC0 0
#define PTC1 1
#define PTC2 2
#define PTC3 3
#define PTC4 4
#define PTC5 5
#define PTC6 6
#define PTC7 7
#define PTC8 8
#define PTC9 9
#define PTC10 10
#define PTC11 11
#define PTC12 12
#define PTC13 13
#define PTC14 14
#define PTC15 15
#define PTC16 16
#define PTC17 17


#define PTB0 0
#define PTB1 1
#define PTB2 2
#define PTB3 3
#define PTB4 4
#define PTB5 5
#define PTB6 6
#define PTB7 7
#define PTB8 8
#define PTB9 9
#define PTB10 10
#define PTB11 11
#define PTB12 12
#define PTB13 13
#define PTB14 14
#define PTB15 15
#define PTB16 16
#define PTB17 17


#define PTE0 0
#define PTE1 1
#define PTE2 2
#define PTE3 3
#define PTE4 4
#define PTE5 5
#define PTE6 6
#define PTE7 7
#define PTE8 8
#define PTE9 9
#define PTE10 10
#define PTE11 11
#define PTE12 12
#define PTE13 13
#define PTE14 14
#define PTE15 15
#define PTE16 16
#define PTE17 17


#define PTD0 0
#define PTD1 1
#define PTD2 2
#define PTD3 3
#define PTD4 4
#define PTD5 5
#define PTD6 6
#define PTD7 7
#define PTD8 8
#define PTD9 9
#define PTD10 10
#define PTD11 11
#define PTD12 12
#define PTD13 13
#define PTD14 14
#define PTD15 15
#define PTD16 16
#define PTD17 17


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void gpio_void_config_Pin_Out(S_GPIO_Type* PT, T_UWORD numbit);
void gpio_void_config_Pin_Mux(S_PORT_Type * PORT, T_UWORD numbit, T_UWORD mux);
void gpio_void_config_Pin_Int(S_GPIO_Type* PT, T_UWORD numbit);
void gpio_void_io_Set_Pin(S_GPIO_Type* PT,T_UWORD numbit);
void gpio_void_io_Clear_Pin(S_GPIO_Type* PT,T_UWORD numbit);
T_UBYTE gpio_T_UBYTE_io_GetValue_Pin(S_GPIO_Type* PT,T_UWORD numbit);
void gpio_void_clearFlag_interrPin(S_PORT_Type * pPORT,T_UWORD mask );


#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
