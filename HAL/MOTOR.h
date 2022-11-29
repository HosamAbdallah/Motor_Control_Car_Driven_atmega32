  

#ifndef MOTOR_H_
#define MOTOR_H_

#include "StdTypes.h"
#include "DIO_Interface.h"

/************* MOTOR_Interface.h *******************/
#define IN1 0
#define IN2 1

typedef enum {
	M1=0,
	M2,
	M3,
	M4
	}MOTOR_type;

void MOTOR_Init(void);

void MOTOR_CW(MOTOR_type motor);    // CW means....clock wise
void MOTOR_CCW(MOTOR_type motor);   // CCW means...counter clock wise
void MOTOR_Stop(MOTOR_type motor);



/********************** MOTOR_Cfg.c ***********************************/
static DIO_Pin_type MotorPinsArray[4][2]={
// motors    IN1     IN2
/* M1*/     {PIND0,PIND1}  ,
/* M2*/     {PIND2,PIND3}  ,
/* M3*/     {PIND4,PIND5}  ,
/* M4*/     {PIND6,PIND7}
	};
	
	

/***************** pin config *********************/
//this Macros is another solution adjective using MotorPinsArray but we will re-build all project files again

/*
#define IN1_MOTOR1 PIND0
#define IN2_MOTOR1 PIND1

#define IN3_MOTOR2 PIND2
#define IN4_MOTOR2 PIND3

#define IN1_MOTOR3 PIND4
#define IN2_MOTOR3 PIND5

#define IN3_MOTOR4 PIND6
#define IN4_MOTOR4 PIND7
*/





#endif /* MOTOR_H_ */