/*
 * Software_timer.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
void timerRun();
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

#endif /* INC_SOFTWARE_TIMER_H_ */
