/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: filename.c $
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
 * $Log: nvicinit.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "MAL/nvicinit.h"


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


void nvicinit_void_NVIC_init_IRQs (void) {

	S32_NVIC->ICPR[1] = 1 << (48 % 32); /* IRQ48-LPIT0 ch0: clr any pending IRQ*/
	S32_NVIC->ISER[1] = 1 << (48 % 32); /* IRQ48-LPIT0 ch0: enable IRQ */
	S32_NVIC->IP[48] =0x0A; /* IRQ48-LPIT0 ch0: priority 10 of 0-15*/
	S32_NVIC->ICPR[1] = 1 << (63 % 32); /* IRQ48-LPIT0 ch0: clr any pending IRQ*/
	S32_NVIC->ISER[1] = 1 << (63 % 32); /* IRQ48-LPIT0 ch0: enable IRQ */
	S32_NVIC->IP[63] =0x0C; /* IRQ48-LPIT0 ch0: priority 10 of 0-15*/

}

/* Notice: the file ends with a blank new line to avoid compiler warnings */

