/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: mal_interrup.h $
 * $Revision: version #6 $
 * $Author: Jorge Alberto Olvera Contreras, Luis Eduardo Archundia Picazzo $
 * $Date: 03/11/2017 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \MAL file for interrupt enabling.

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
/*     AUTHOR          |     VERSION     |        DESCRIPTION                 */
/*----------------------------------------------------------------------------*/
/*  Luis Archundia     |        5        |  MAL file for clock enabling       */
/*  Jorge Olvera       |        5        |  MAL file for clock enabling       */
/*  Luis Archundia     |        6        |  File name modified to comply with */
/*		       |	         |  naming convention standards.      */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: mal_interrup.h  $
  ============================================================================*/
#ifndef INTERRUP_H
#define INTERRUP_H

/* Includes */
/*============================================================================*/
#include "S32K144.h"
#include "MAL/mal_namingconventions.h"

/* Constants and types */
/*============================================================================*/


/* Exported Variables */
/*============================================================================*/


/* Exported functions prototypes */
/*============================================================================*/
void interrup_void_enableClocks(S_PCC_Type *pPCC, T_UWORD clocksrc, T_UWORD enablelpit0);
void interrup_void_configureTimerChanel(S_LPIT_Type *pLPIT, T_UWORD chanel);
void interrup_void_ch0TimeoutPeriodClocks(S_LPIT_Type *pLPIT, T_UWORD period);
void interrup_void_enableTimer(S_LPIT_Type *pLPIT, T_UWORD period);
void interrup_void_disableTimer(S_LPIT_Type *pLPIT);
void interrup_void_clearFlag_lpitCh0(S_LPIT_Type  *pLPIT,T_UWORD mask);



#endif  /* Notice: the file ends with a blank new line to avoid compiler warnings */