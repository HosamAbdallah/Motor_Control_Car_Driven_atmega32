 


#ifndef CAR_H_
#define CAR_H_

#include "StdTypes.h"
#include "DIO_Interface.h"

#define PRESS_FORWARD  PINA2
#define PRESS_BACKWARD PINA3
#define PRESS_RIGHT    PINA4
#define PRESS_LEFT     PINA5
#define PRESS_STOP     PINA6


void CAR_Init(void);

void CAR_Runnable(void);


/****************** private **********/ 
/* dol Functions maynfa3sh ytshafo fe ay file tany la2nhom static in file.....CAR.h 

static void move_forward(void);
static void move_backward(void);
static void move_left(void);
static void move_right(void);
static void stop_all(void);
*/


#endif /* CAR_H_ */