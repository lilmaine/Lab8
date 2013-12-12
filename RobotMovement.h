/*
 * movement.h
 *
 *  Created on: Dec 10, 2013
 *      Author: Tramaine Barnett
 */

#ifndef MOVEMENT_H_
#define MOVEMENT_H_
#define FORWARD  1
#define BACK  2
#define LEFT  3
#define LEFT90 4
#define RIGHT  5
#define RIGHT90 6



void initTimer();
void RobotMovement(unsigned char direction);
void Stop();

#endif /* MOVEMENT_H_ */
