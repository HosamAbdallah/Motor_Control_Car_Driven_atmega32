

#include "MOTOR.h"

void MOTOR_Init(void)
{
	// do nothing 
}

void MOTOR_CW(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],HIGH);
	DIO_WritePin(MotorPinsArray[motor][IN2],LOW);
	
	/*DIO_WritePin(IN1_MOTOR1,HIGH);
	DIO_WritePin(IN2_MOTOR1,LOW);*/
}  
void MOTOR_CCW(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN2],HIGH);
	
	/*DIO_WritePin(IN1_MOTOR1,LOW);
	DIO_WritePin(IN2_MOTOR1,HIGH);*/
}
void MOTOR_Stop(MOTOR_type motor)
{
	DIO_WritePin(MotorPinsArray[motor][IN1],LOW);
	DIO_WritePin(MotorPinsArray[motor][IN2],LOW);
	
	/*DIO_WritePin(IN1_MOTOR1,LOW);
	DIO_WritePin(IN2_MOTOR1,LOW);*/
}