
#include "CAR.h"
#include "MOTOR.h"

 void CAR_Init(void)
{
	// do nothing 
}

static void move_forward(void)
{
	MOTOR_CW(M1);
	MOTOR_CW(M2);
	MOTOR_CW(M3);
	MOTOR_CW(M4);
}
static void move_backward(void)
{
	MOTOR_CCW(M1);
	MOTOR_CCW(M2);
	MOTOR_CCW(M3);
	MOTOR_CCW(M4);
}
static void move_left(void)
{
	MOTOR_CCW(M1);
	MOTOR_CCW(M2);
	MOTOR_CW(M3);
	MOTOR_CW(M4);
}
static void move_right(void)
{
	MOTOR_CW(M1);
	MOTOR_CW(M2);
	MOTOR_CCW(M3);
	MOTOR_CCW(M4);
}
static void stop_all(void)
{
	MOTOR_Stop(M1);
	MOTOR_Stop(M2);
	MOTOR_Stop(M3);
	MOTOR_Stop(M4);
}


void CAR_Runnable(void)
{
	MOTOR_Stop(M1);
	MOTOR_Stop(M2);
	MOTOR_Stop(M3);
	MOTOR_Stop(M4);
	if(!DIO_ReadPin(PRESS_FORWARD))
	{
		move_forward();
	    while (!DIO_ReadPin(PRESS_FORWARD));//busy wait: to make Processor focus with it because it was a fastest event. 
	}
	if (!DIO_ReadPin(PRESS_BACKWARD))
	{
		move_backward();
		while (!DIO_ReadPin(PRESS_BACKWARD));
	}
	if (!DIO_ReadPin(PRESS_RIGHT))
	{
		move_right();
	    while (!DIO_ReadPin(PRESS_RIGHT));
	}
	if (!DIO_ReadPin(PRESS_LEFT))
	{
		move_left();
		while (!DIO_ReadPin(PRESS_LEFT));
	}
	if(!DIO_ReadPin(PRESS_STOP))
	{
		stop_all();
		while (!DIO_ReadPin(PRESS_STOP));
	}
}
	
	
	
	
	