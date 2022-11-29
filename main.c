/*****************************************************************************************
Project name:  Line Follow Car 
Components:    1. atmega32 (Target)
			   2. DC Motor (5v)
	           3. L293D (H-Bridge Module)(2)
    	       4. Button (5)
			   5. Battery
******************************************************************************************/
 

#include "Utils.h"
#include "MemMap.h"
#include "StdTypes.h"

#define F_CPU 8000000
#include "util/delay.h"

#include "DIO_Interface.h"
#include "MOTOR.h"
#include "CAR.h"



int main(void)
{
		DIO_Init();
		MOTOR_Init();
		CAR_Init();

	while(1)
	{
		CAR_Runnable();
	}
}
		
		
		


