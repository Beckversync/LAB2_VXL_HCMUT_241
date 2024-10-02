/*
 * Software_timer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */

#include "software_timer.h"

int timer0_counter = 0;
int timer0_flag = 0;
int timer_cycle = 10;

void setTimer0(int duration){
	timer0_counter = duration / timer_cycle;
	timer0_flag = 0;
}

void timer_run(){
	if(timer0_counter > 0){
		timer0_counter--;
		if(timer0_counter <= 0){
			timer0_flag = 1;
		}
	}
}
