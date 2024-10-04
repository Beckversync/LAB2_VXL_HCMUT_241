/*
 * Software_timer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */

#include "software_timer.h"

int timer_led_flag;	//flag use for switch LED_7SEG
int timer_led_count;

int timer_dot_flag;	//flag use for update LED_DOT
int timer_dot_count;

void timer_run(){	//	decrease timer_count by 1 for both two timer_count
					//and set both timer_flag if its timer_count <= 0
	if(timer_led_count > 0){
		timer_led_count--;
		if(timer_led_count <= 0){
			timer_led_flag = 1;
		}
	}

	if(timer_dot_count > 0){
		timer_dot_count--;
		if(timer_dot_count <= 0){
			timer_dot_flag = 1;
		}
	}
}

//function set_timer_dot():
//	- reset timer_dot_flag
//	- set timer_counter for its object with duration
void set_timer_dot(int duration){
	timer_dot_count = duration;
	timer_dot_flag = 0;
}

//function set_timer_led():
//	- reset timer_led_flag
//	- set timer_counter for its object with duration
void set_timer_led(int duration){
	timer_led_count = duration;
	timer_led_flag = 0;
}
