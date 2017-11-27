/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: Port.h $
 * $Revision: 3 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 17/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \
    
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
/*  AUTHOR             |      VERSION       |        DESCRIPTION              */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |         3          |                                 */
/*  Jorge Olvera       |         3          |                                 */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: Port.h  $
  ============================================================================*/

#ifndef BSW_MCAL_PORT_PORT_H_
#define BSW_MCAL_PORT_PORT_H_

/* Includes */
/*============================================================================*/

#include "Std_Types.h"


/* Defines */
/*============================================================================*/

#define WINDOW_LED1        7
#define WINDOW_LED2        17
#define WINDOW_LED3        14
#define WINDOW_LED4        15
#define WINDOW_LED5        16
#define WINDOW_LED6        3
#define WINDOW_LED7        16
#define WINDOW_LED8        15
#define WINDOW_LED9        14
#define WINDOW_LED10       13

#define BUTTON_UP          12
#define BUTTON_DOWN        13
#define BUTTON_ANTIPINCH   1

#define INDICATOR_UP       0
#define INDICATOR_DOWN     16

#define TASK_1MS           1
#define TASK_2MS           3

/*
#define PINBKG        13
#define PIN_1MS       7
#define PIN_2MS       17
#define PINOVERLOAD   14
*/

/* Constants and types */
/*============================================================================*/



/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/

void PORT_init (void);

#endif /* BSW_MCAL_PORT_PORT_H_ */
  

/* Notice: the file ends with a blank new line to avoid compiler warnings */







