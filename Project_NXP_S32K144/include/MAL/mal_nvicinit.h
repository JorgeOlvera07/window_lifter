/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: mal_nvicinit.h $
 * $Revision: version #6 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \MAL file for all interrupts config.

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
/*       AUTHOR        |    VERSION    |            DESCRIPTION               */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |       5       | MAL file for all interrupts config.  */
/*  Jorge Olvera       |       5       | MAL file for all interrupts config.  */
/*  Luis Archundia     |       6       | File name modified to comply with    */
/*		       |	       | naming convention standards.         */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: mal_nvicinit.h  $
  ============================================================================*/
#ifndef NVICINIT_H
#define NVICINIT_H

/* Includes */
/*============================================================================*/

#include "S32K144.h"
#include "MAL/mal_namingconventions.h"
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
