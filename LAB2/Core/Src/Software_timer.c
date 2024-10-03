/*
 * Software_timer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */


#include "software_timer.h"


int timer0_counter = 0;
int timer0_flag = 0;

int timer1_counter = 0;
int timer1_flag = 0;

int timer_cycle = 10;

void setTimer0(int duration){
	timer0_counter = duration / timer_cycle;
	timer0_flag = 0;
}
void setTimer1(int duration){
	timer1_counter = duration / timer_cycle;
	timer1_flag = 0;
}

void timer_run0(){
	if(timer0_counter > 0){
		timer0_counter--;
		if(timer0_counter <= 0){
			timer0_flag = 1;
		}
	}
}

void timer_run1(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
}
