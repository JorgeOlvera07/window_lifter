/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: nvicinit.h $
 * $Revision: version #5 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 30/10/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \MAL file for all interrupts config.
    
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
/*       AUTHOR        |    VERSION    |            DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |       5       |  MAL file for all interrupts config. */
/*  Jorge Olvera       |       5       |  MAL file for all interrupts config. */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: nvicinit.h  $
  ============================================================================*/
#ifndef NVICINIT_H
#define NVICINIT_H

/* Includes */
/*============================================================================*/

#include "S32K144.h"
#include "MAL/namingconventions.h"
/* Defines */
/*============================================================================*/


/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/


void nvicinit_void_NVIC_init_IRQs (void);

#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */
