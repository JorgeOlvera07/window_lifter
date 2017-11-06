
#include "APP/app_initproyect.h"
#include "APP/app_windowcontrol.h"
#include "APP/app_buttonscontrol.h"
#include "APP/app_indicatorscontrol.h"
#include "APP/app_timer1ms.h"

typedef struct {

	T_UBYTE bi1_FlagwindowUp:1;
	T_UBYTE bi1_FlagwindowDown:1;
	T_UBYTE bi1_FlagOneTouchUp:1;
	T_UBYTE bi1_FlagOneTouchDown:1;
	T_UBYTE bi1_FlagAntipinch:1;

}S_Structflags;

T_UWORD ruw_lpit0_ch0_counter1ms = 0; /* LPIT0 chan 0 timeout counter */
T_UBYTE rub_Percentwindow=0;
S_Structflags rs_Fg;



int main(void) {

	rs_Fg.bi1_FlagOneTouchDown=0;
	rs_Fg.bi1_FlagwindowUp=0;
	rs_Fg.bi1_FlagwindowDown=0;
	rs_Fg.bi1_FlagOneTouchUp=0;
	rs_Fg.bi1_FlagOneTouchDown=0;
	rs_Fg.bi1_FlagAntipinch=0;


	ip_void_EnableNVIC();
	ip_void_LPIT0Timer_init(); /* Initialize PIT0*/
	ip_void_EnablePCC ();
	ip_void_WindowInit ();
	ip_void_IndicatorsInit();
	ip_void_ButtonsInit ();
	ip_void_EnableClocksandModes ();
	ip_void_DisableWatchdog();



 for (;;) {

	 if ( (bc_T_UBYTE_statusButt_Up() || bc_T_UBYTE_statusButt_Down())||(rs_Fg.bi1_FlagAntipinch==1) ) {

		 tmr1ms_void_EnableTimer1ms ();

		 while( (bc_T_UBYTE_statusButt_Up() ^ bc_T_UBYTE_statusButt_Down())|| (rs_Fg.bi1_FlagwindowDown==1)||(rs_Fg.bi1_FlagwindowUp==1) ){


		 if( ((ruw_lpit0_ch0_counter1ms>=_10ms)&&bc_T_UBYTE_statusButt_Up()) || (rs_Fg.bi1_FlagwindowUp==1)){  /* valid button press up */
			 ic_void_onIndicator_Up();
			 ic_void_offIndicator_Down();

				 if ( ((ruw_lpit0_ch0_counter1ms<_500ms)&&bc_T_UBYTE_statusButt_Up())|| (rs_Fg.bi1_FlagwindowUp==1) ){ /* one touch  up*/
					 rs_Fg.bi1_FlagOneTouchUp=1;

					 while(bc_T_UBYTE_statusButt_Up()){/* semiautomatic up */
						 if((ruw_lpit0_ch0_counter1ms>_500ms)){
							 rs_Fg.bi1_FlagwindowUp=0;
							 ruw_lpit0_ch0_counter1ms=0;
							 rs_Fg.bi1_FlagOneTouchUp=0;

							 while(bc_T_UBYTE_statusButt_Up()){
								 if(ruw_lpit0_ch0_counter1ms>=_400ms){

									                         ruw_lpit0_ch0_counter1ms=0;
									                         rub_Percentwindow++;
								 							 wc_void_ControlWindowUp (&rub_Percentwindow);


								 						 }

							 }
						 }



					 } /* semiautomatic up */

					 if (rs_Fg.bi1_FlagOneTouchUp){  /* one touch  up*/

						 rs_Fg.bi1_FlagwindowUp=0;
						 rs_Fg.bi1_FlagOneTouchUp=0;

					tmr1ms_void_DisableTimer1ms ();
					ruw_lpit0_ch0_counter1ms=0;


					 tmr1ms_void_EnableTimer1ms ();

					 while(rub_Percentwindow<10){

						 if(ruw_lpit0_ch0_counter1ms>=_400ms) {tmr1ms_void_DisableTimer1ms (); ruw_lpit0_ch0_counter1ms=0;rub_Percentwindow++; wc_void_ControlWindowUp (&rub_Percentwindow); tmr1ms_void_EnableTimer1ms ();}
						 else if(bc_T_UBYTE_statusButt_Down()){
							 tmr1ms_void_DisableTimer1ms ();
							 ruw_lpit0_ch0_counter1ms=0;
							 tmr1ms_void_EnableTimer1ms ();

							 while(bc_T_UBYTE_statusButt_Down()){if((ruw_lpit0_ch0_counter1ms>=_10ms)&&bc_T_UBYTE_statusButt_Down()){rs_Fg.bi1_FlagwindowDown=1;ic_void_offIndicator_Up();ic_void_onIndicator_Down();break;} }
						 }

						 //antipinch
						 else if(bc_T_UBYTE_statusButt_Down()){}



						 if(rs_Fg.bi1_FlagwindowDown==1){break;}



					 }

					 } /* one touch  up*/

				 } /* one touch  up*/


		         }  /* valid button press up */

		 if( ((ruw_lpit0_ch0_counter1ms>=_10ms)&&bc_T_UBYTE_statusButt_Down()) || (rs_Fg.bi1_FlagwindowDown==1)){/* valid button press down */
			 ic_void_onIndicator_Down();
			 ic_void_offIndicator_Up();


					 if ( ((ruw_lpit0_ch0_counter1ms<_500ms)&&bc_T_UBYTE_statusButt_Down())|| (rs_Fg.bi1_FlagwindowDown==1) ) { /* one touch  down*/

						 rs_Fg.bi1_FlagOneTouchDown=1;


						 while(bc_T_UBYTE_statusButt_Down()){/* semiautomatic down */
							 if((ruw_lpit0_ch0_counter1ms>_500ms)){
								 rs_Fg.bi1_FlagwindowDown=0;
								 //DisableTimer1ms ();
								 ruw_lpit0_ch0_counter1ms=0;
								 rs_Fg.bi1_FlagOneTouchDown=0;
								 //EnableTimer1ms ();

								 while(bc_T_UBYTE_statusButt_Down()){
									 if(ruw_lpit0_ch0_counter1ms>=_400ms){
									 							 //DisableTimer1ms ();
										                        ruw_lpit0_ch0_counter1ms=0;
									 							wc_void_ControlWindowDown (&rub_Percentwindow);
									 							rub_Percentwindow--;
									 							 //EnableTimer1ms ();

									 						 }

								 }
							 }



						 } /* semiautomatic down */

						 if (rs_Fg.bi1_FlagOneTouchDown){  /* one touch  down*/

							 if(rs_Fg.bi1_FlagAntipinch){ic_void_offIndicator_Up();ic_void_offIndicator_Down();}

							 rs_Fg.bi1_FlagwindowDown=0;
							 rs_Fg.bi1_FlagOneTouchDown=0;

							 tmr1ms_void_DisableTimer1ms ();
							 ruw_lpit0_ch0_counter1ms=0;



					 		tmr1ms_void_EnableTimer1ms ();

					 		while(rub_Percentwindow>=1){

					 			if(ruw_lpit0_ch0_counter1ms>=_400ms) {tmr1ms_void_DisableTimer1ms (); ruw_lpit0_ch0_counter1ms=0; wc_void_ControlWindowDown (&rub_Percentwindow);  rub_Percentwindow--; tmr1ms_void_EnableTimer1ms ();}
								 else if(bc_T_UBYTE_statusButt_Up()){
									 tmr1ms_void_DisableTimer1ms ();
									 ruw_lpit0_ch0_counter1ms=0;
									 tmr1ms_void_EnableTimer1ms ();

									 while(bc_T_UBYTE_statusButt_Up()){if((ruw_lpit0_ch0_counter1ms>=_10ms)&&bc_T_UBYTE_statusButt_Up()){(rs_Fg.bi1_FlagwindowUp=1);ic_void_onIndicator_Up();ic_void_offIndicator_Down();break;} }
								 }



								 if(rs_Fg.bi1_FlagwindowUp==1){break;}
					 		}

					 		if(rs_Fg.bi1_FlagAntipinch){
					 			tmr1ms_void_DisableTimer1ms ();
					 			rs_Fg.bi1_FlagAntipinch=0;
					 			ruw_lpit0_ch0_counter1ms=0;
					 			tmr1ms_void_EnableTimer1ms ();
					 			while(ruw_lpit0_ch0_counter1ms<=_5000ms){/*Esperar 5 segundos*/}
					 		}


						 }/* one touch  down*/

					 }/* one touch  down*/

		 		 } /* valid button pres down */
		 }

	 }
	 else { /* If BTN0 was not pushed */
		 ic_void_offIndicator_Up();
		 ic_void_offIndicator_Down();

	 tmr1ms_void_DisableTimer1ms ();
	 ruw_lpit0_ch0_counter1ms=0;






	 }

 }
}

void LPIT0_Ch0_IRQHandler (void) {
	ruw_lpit0_ch0_counter1ms++; /* Increment LPIT0 timeout counter */

	tmr1ms_void_clearFlagTimer1ms();
}


void PORTE_IRQHandler (void) {

	rs_Fg.bi1_FlagwindowDown=1;
	rs_Fg.bi1_FlagAntipinch=1;

	ic_void_onIndicator_Up();
	bc_void_clearFlag_AntiPinch();

}



