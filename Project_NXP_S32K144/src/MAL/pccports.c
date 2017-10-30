/*============================================================================*/
/*                        I BS SOFTWARE GROUP                                 */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*/
/*!
 * $Source: pccports.c $
 * $Revision: version 5 $
 * $Author: Olvera Contreras Jorge Alberto, Luis Eduardo Archundia Picazzo  $
 * $Date: 30/10/17 $
 */
/*============================================================================*/
/* DESCRIPTION :                                                              */
/** \file
    MAL file to initialize and configure all pcc ports                        */
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
/*    Author           |      Version       |       Description               */
/*----------------------------------------------------------------------------*/
/* Olvera Jorge        |           5        | MAL file to initialize and      */
/* Archundia Luis      |           5        | configure all pcc ports         */
/*============================================================================*/
/*                               OBJECT HISTORY                               */
/*============================================================================*/
/*
 * $Log: pccports.c  $
  ============================================================================*/


/* Includes */
/*============================================================================*/

#include "MAL/pccports.h"


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



void pccports_void_config_PCC_PORT(T_UWORD configPCC){
	PCC-> PCCn[configPCC] = PCC_PCCn_CGC_MASK;
}

/* Notice: the file ends with a blank new line to avoid compiler warnings */
