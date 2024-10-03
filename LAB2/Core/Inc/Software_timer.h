/*
 * Software_timer.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_counter;
extern int timer0_flag;

extern int timer1_counter;
extern int timer1_flag;

void setTimer0(int duration);
void timer_run0();

void setTimer1(int duration);
void timer_run1();

#endif /* INC_SOFTWARE_TIMER_H_ */
