#include "Servo.h"

#define SERVO 3

Servo s;
int pos; 

//VarSpeedServo servo;

void setup() {
  s.attach(SERVO); // Inicializando o servo "s"
  s.write(90);  //Quantos graus ficará a posição do motor (de 0 até 180)
}

void loop() {

  
  for (   pos = 0;     pos <= 180;       pos = pos + 1    ){
    s.write (pos);
    delay (20);

    if (pos == 0){
      delay(500);
    }
    
  }

}
