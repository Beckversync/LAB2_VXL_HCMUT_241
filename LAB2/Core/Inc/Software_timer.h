/*
 * Software_timer.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_led_flag;	//flag use for switch LED_7SEG
extern int timer_dot_flag;	//flag use for update LED_DOT
void timer_run();	//	decrease timer_count by 1 for both two timer_count
					//and set both timer_flag if its timer_count <= 0

//function set_timer_dot():
//	- reset timer_dot_flag
//	- set timer_counter for its object with duration
void set_timer_dot(int duration);

//function set_timer_led():
//	- reset timer_led_flag
//	- set timer_counter for its object with duration
void set_timer_led(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
