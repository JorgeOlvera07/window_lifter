/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: mal_nvicinit.c $
 * $Revision: version #6 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    MAL file to initialize and configure all nvic.

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
/*    Author         |      Version      |       Description                  */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge      |         5         | APP file to control the interrupts */
/* Archundia Luis    |         5         | APP file to control the interrupts */
/* Luis Archundia    |         6         | File name modified to comply with  */
/*		     |	                 | naming convention standards.       */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: mal_nvicinit.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "MAL/mal_nvicinit.h"


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

