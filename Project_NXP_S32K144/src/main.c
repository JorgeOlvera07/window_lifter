
#include "APP/app_initproyect.h"
#include "APP/app_windowcontrol.h"
#include "APP/app_buttonscontrol.h"
#include "APP/app_indicatorscontrol.h"
#include "APP/app_timer1ms.h"

typedef struct {

	T_UBYTE bi1_flagAutomaticUp:1;
	T_UBYTE bi1_flagAutomaticDown:1;
	T_UBYTE bi1_flagSemiautomaticUp:1;
	T_UBYTE bi1_flagSemiautomaticDown:1;
	T_UBYTE bi1_flagUp:1;
	T_UBYTE bi1_flagDown:1;
	T_UBYTE bi1_FlagAntipinch:1;
	T_UBYTE bi1_flagWaiting5Secons:1;

}S_Structflags;


T_UWORD ruw_lpit0_ch0_counter1ms = 0; /* LPIT0 chan 0 timeout counter */
T_UBYTE rub_Percentwindow=0;
S_Structflags rs_Fg;

void MachineState();


int main(void) {

	rs_Fg.bi1_flagAutomaticUp=0;
	rs_Fg.bi1_flagAutomaticDown=0;
	rs_Fg.bi1_flagSemiautomaticUp=0;
	rs_Fg.bi1_flagSemiautomaticDown=0;
	rs_Fg.bi1_FlagAntipinch=0;
	rs_Fg.bi1_flagDown=0;
	rs_Fg.bi1_flagUp=0;
	rs_Fg.bi1_flagWaiting5Secons=0;


	ip_void_EnableNVIC();
	ip_void_LPIT0Timer_init(); /* Initialize PIT0*/
	ip_void_EnablePCC ();
	ip_void_WindowInit ();
	ip_void_IndicatorsInit();
	ip_void_ButtonsInit ();
	ip_void_EnableClocksandModes ();
	ip_void_DisableWatchdog();
	tmr1ms_void_EnableTimer1ms ();

 for (;;) {
	 MachineState();
 }
}


void MachineState(){
static unsigned char state = 0;


switch(state){

/*****************************************************    S T A T E      0   **************************************************/
/*============================================================================================================================*/
case 0:
/* Acciones del estado 0 */
	ic_void_offIndicator_Up();
	ic_void_offIndicator_Down();

/* Conditions */
	if((bc_T_UBYTE_statusButt_Up()==0) || (bc_T_UBYTE_statusButt_Down()==0)){ /* Condiciones para permanecer en state 0  */
		/* Acciones para permanecer en state 0 */
		state=0;
	}

	if(bc_T_UBYTE_statusButt_Up()||bc_T_UBYTE_statusButt_Down()){ /* Condiciones de la transicion state 0 - 1 */
		/* Acciones de la transicion state 0 -1 */
		state=1;
		ruw_lpit0_ch0_counter1ms=0;
	}

	break;
/*============================================================================================================================*/

/*****************************************************    S T A T E      1   **************************************************/
/*============================================================================================================================*/
case 1:
	/* Acciones del estado 1 */
	ic_void_offIndicator_Up();
	ic_void_offIndicator_Down();


	/* Conditions */

	if(bc_T_UBYTE_statusButt_Up()||bc_T_UBYTE_statusButt_Down()){ /* Condiciones para permanecer en state 1  */
		/* Acciones para permanecer en state 1 */
		state=1;
	}

	if((ruw_lpit0_ch0_counter1ms>=_10ms)&&(bc_T_UBYTE_statusButt_Up())){ /* Condiciones de la transicion state 1 - 2 */
		/* Acciones de la transicion state 1 - 2 */
		state=2;
		rs_Fg.bi1_flagUp=1;
	}

	if((ruw_lpit0_ch0_counter1ms>=_10ms)&&(bc_T_UBYTE_statusButt_Down())){ /* Condiciones de la transicion state 1 - 2 */
		/* Acciones de la transicion state 1 - 2 */
		state=2;
		rs_Fg.bi1_flagDown=1;
	}

	if((ruw_lpit0_ch0_counter1ms>=_10ms)&&(bc_T_UBYTE_statusButt_AntiP())){ /* Condiciones de la transicion state 1 - 6 */
		/* Acciones de la transicion state 1 - 6 */
		state=6;
		rs_Fg.bi1_FlagAntipinch=1;
		ruw_lpit0_ch0_counter1ms=0;
	}



	break;
/*============================================================================================================================*/

/*****************************************************    S T A T E      2   **************************************************/
/*============================================================================================================================*/
case 2:
	/* Acciones del estado 2 */
	if(rs_Fg.bi1_flagDown){ ic_void_onIndicator_Down();}
	if(rs_Fg.bi1_flagUp){ ic_void_onIndicator_Up();}

	/* Conditions */

	if((bc_T_UBYTE_statusButt_Up()==0) && (bc_T_UBYTE_statusButt_Down()==0)){ /* Condiciones para permanecer en state 2  */
		/* Acciones para permanecer en state 2 */
		state=2;
	}

	if(bc_T_UBYTE_statusButt_Up()||bc_T_UBYTE_statusButt_Down()){ /* Condiciones de la transicion state 2 - 3 */
		/* Acciones de la transicion state 2 - 3 */
		state=3;
	}

	break;
/*============================================================================================================================*/

/*****************************************************    S T A T E      3   **************************************************/
/*============================================================================================================================*/
case 3:
	/* Acciones del estado 3 */

	/* Conditions */
	if(rs_Fg.bi1_flagUp){

		if(bc_T_UBYTE_statusButt_Up()&&(ruw_lpit0_ch0_counter1ms>_500ms)){ /* Condiciones de la transicion state 3 - 5 */
			/* Acciones de la transicion state 3 - 5 */
			state=5;
			rs_Fg.bi1_flagSemiautomaticUp=1;
			ruw_lpit0_ch0_counter1ms=0;
		}

		if((bc_T_UBYTE_statusButt_Up()==0)&&(ruw_lpit0_ch0_counter1ms<_500ms)){ /* Condiciones de la transicion state 3 - 4 */
			/* Acciones de la transicion state 3 - 4 */
			state=4;
			rs_Fg.bi1_flagAutomaticUp=1;
			ruw_lpit0_ch0_counter1ms=0;
		}

	}

	if(rs_Fg.bi1_flagDown){

		if(bc_T_UBYTE_statusButt_Down()&&(ruw_lpit0_ch0_counter1ms>_500ms)){ /* Condiciones de la transicion state 3 - 5 */
			/* Acciones de la transicion state 3 - 5 */
			state=5;
			rs_Fg.bi1_flagSemiautomaticDown=1;
			ruw_lpit0_ch0_counter1ms=0;

		}

		if((bc_T_UBYTE_statusButt_Down()==0)&&(ruw_lpit0_ch0_counter1ms<_500ms)){ /* Condiciones de la transicion state 3 - 4 */
			/* Acciones de la transicion state 3 - 4 */
			state=4;
			rs_Fg.bi1_flagAutomaticDown=1;
			ruw_lpit0_ch0_counter1ms=0;
		}

	}
	break;
/*============================================================================================================================*/

/*****************************************************    S T A T E      4   **************************************************/
/*============================================================================================================================*/
case 4:
	/* Acciones del estado 4 */
	if(rs_Fg.bi1_flagAutomaticDown){
		if(rub_Percentwindow>=1){
			if(ruw_lpit0_ch0_counter1ms>=_400ms){
				wc_void_ControlWindowDown (&rub_Percentwindow);
				rub_Percentwindow--;
				ruw_lpit0_ch0_counter1ms=0;
			}

		}

	}

	if(rs_Fg.bi1_flagAutomaticUp){
		if(rub_Percentwindow<10){
			if(ruw_lpit0_ch0_counter1ms>=_400ms){
				rub_Percentwindow++;
				wc_void_ControlWindowUp (&rub_Percentwindow);
				ruw_lpit0_ch0_counter1ms=0;
			}

		}

	}

	/* Conditions */

	if(rs_Fg.bi1_flagAutomaticUp&&rub_Percentwindow==10){ /* Condiciones de la transicion state 4 - 0 */
		/* Acciones de la transicion state 4 - 0 */
		state=0;
		rs_Fg.bi1_flagAutomaticUp=0;
		rs_Fg.bi1_flagUp=0;
	}

	if(rs_Fg.bi1_flagAutomaticDown&&rub_Percentwindow==0){ /* Condiciones de la transicion state 4 - 0 */
		/* Acciones de la transicion state 4 - 0 */
		state=0;
		rs_Fg.bi1_flagAutomaticDown=0;
		rs_Fg.bi1_flagDown=0;
	}

	if((bc_T_UBYTE_statusButt_Up())||(bc_T_UBYTE_statusButt_Down())){ /* Condiciones de la transicion state 4 - 1 */
		/* Acciones de la transicion state 4 - 1 */
		state=1;
		rs_Fg.bi1_flagAutomaticDown=0;
		rs_Fg.bi1_flagDown=0;
		rs_Fg.bi1_flagAutomaticUp=0;
		rs_Fg.bi1_flagUp=0;
		ruw_lpit0_ch0_counter1ms=0;
	}

	if((rs_Fg.bi1_flagUp)&&bc_T_UBYTE_statusButt_AntiP()){ /* Condiciones de la transicion state 4 - 1 */
		/* Acciones de la transicion state 4 - 1 */
		state=1;
		rs_Fg.bi1_flagAutomaticUp=0;
		rs_Fg.bi1_flagUp=0;
		ruw_lpit0_ch0_counter1ms=0;
	}




	break;
/*============================================================================================================================*/


/*****************************************************    S T A T E      5   **************************************************/
/*============================================================================================================================*/
case 5:
	/* Acciones del estado 5 */
	if(rs_Fg.bi1_flagSemiautomaticDown){
		if(bc_T_UBYTE_statusButt_Down()){
			if(ruw_lpit0_ch0_counter1ms>=_400ms){
				wc_void_ControlWindowDown (&rub_Percentwindow);
				rub_Percentwindow--;
				ruw_lpit0_ch0_counter1ms=0;
		}

			}

	}

	if(rs_Fg.bi1_flagSemiautomaticUp){
		if(bc_T_UBYTE_statusButt_Up()){
			if(ruw_lpit0_ch0_counter1ms>=_400ms){
				rub_Percentwindow++;
				wc_void_ControlWindowUp (&rub_Percentwindow);
				ruw_lpit0_ch0_counter1ms=0;
			}

		}

	}

	/* Conditions */

	if(rs_Fg.bi1_flagSemiautomaticUp&&rub_Percentwindow==10){ /* Condiciones de la transicion state 5 - 0 */
		/* Acciones de la transicion state 5 - 0 */
		state=0;
		rs_Fg.bi1_flagSemiautomaticUp=0;
		rs_Fg.bi1_flagUp=0;
	}

	if(rs_Fg.bi1_flagSemiautomaticDown&&rub_Percentwindow==0){ /* Condiciones de la transicion state 5 - 0 */
		/* Acciones de la transicion state 5 - 0 */
		state=0;
		rs_Fg.bi1_flagSemiautomaticDown=0;
		rs_Fg.bi1_flagDown=0;
	}

	if((bc_T_UBYTE_statusButt_Up()==0)&&(rs_Fg.bi1_flagSemiautomaticUp)){ /* Condiciones de la transicion state 5 - 0 */
		/* Acciones de la transicion state 5 - 0 */
		state=0;
		rs_Fg.bi1_flagSemiautomaticUp=0;
		rs_Fg.bi1_flagUp=0;
	}

	if((bc_T_UBYTE_statusButt_Down()==0)&&(rs_Fg.bi1_flagSemiautomaticDown)){ /* Condiciones de la transicion state 5 - 0 */
		/* Acciones de la transicion state 5 - 0 */
		state=0;
		rs_Fg.bi1_flagSemiautomaticDown=0;
		rs_Fg.bi1_flagDown=0;
	}


	if((rs_Fg.bi1_flagUp)&&bc_T_UBYTE_statusButt_AntiP()){ /* Condiciones de la transicion state 5 - 1 */
		/* Acciones de la transicion state 5 - 1 */
		state=1;
		rs_Fg.bi1_flagSemiautomaticUp=0;
		rs_Fg.bi1_flagUp=0;
		ruw_lpit0_ch0_counter1ms=0;
	}


	break;
/*============================================================================================================================*/

/*****************************************************    S T A T E      6   **************************************************/
/*============================================================================================================================*/
case 6:
     /* Acciones del estado 6 */
	if(rs_Fg.bi1_FlagAntipinch){
		if(rub_Percentwindow>=1){
			if(ruw_lpit0_ch0_counter1ms>=_400ms){
				wc_void_ControlWindowDown (&rub_Percentwindow);
				rub_Percentwindow--;
				ruw_lpit0_ch0_counter1ms=0;
			}

		}

	}

     /* Conditions */
	if(rs_Fg.bi1_FlagAntipinch){ /* Condiciones para permanecer en state 6  */
		/* Acciones para permanecer en state 6 */
		state=6;
	}

	if((rs_Fg.bi1_FlagAntipinch)&&rub_Percentwindow==0){ /* Condiciones de la transicion state 6 - 7 */
		/* Acciones de la transicion state 6 - 7 */
		state=7;
		rs_Fg.bi1_FlagAntipinch=0;
		rs_Fg.bi1_flagWaiting5Secons=1;
		ruw_lpit0_ch0_counter1ms=0;
	}


	break;
/*============================================================================================================================*/


/*****************************************************    S T A T E      7   **************************************************/
/*============================================================================================================================*/
case 7:
	    /* Acciones del estado 7 */


	     /* Conditions */
		if((rs_Fg.bi1_flagWaiting5Secons)&&ruw_lpit0_ch0_counter1ms<=_5000ms){ /* Condiciones para permanecer en state 7  */
			/* Acciones para permanecer en state 7 */
			state=7;
		}

		if(ruw_lpit0_ch0_counter1ms>_5000ms){ /* Condiciones de la transicion state 7 - 0 */
			/* Acciones de la transicion state 7 - 0 */
			state=0;
			rs_Fg.bi1_flagWaiting5Secons=0;
		}


		break;
	/*============================================================================================================================*/






/*****************************************************      D E F A U L T    **************************************************/
/*============================================================================================================================*/
default:
	break;
/*============================================================================================================================*/


 }
}


void LPIT0_Ch0_IRQHandler (void) {
	ruw_lpit0_ch0_counter1ms++; /* Increment LPIT0 timeout counter */

	tmr1ms_void_clearFlagTimer1ms();
}

/*
void PORTE_IRQHandler (void) {
	bc_void_clearFlag_AntiPinch();
}
*/


