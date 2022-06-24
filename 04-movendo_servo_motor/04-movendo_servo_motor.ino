#include "Servo.h"

#define SERVO 3

Servo s;


//VarSpeedServo servo;

void setup() {
  s.attach(SERVO); // Inicializando o servo "s"
  s.write(90);  //Quantos graus ficará a posição do motor (de 0 até 180)
}

void loop() {
  

}
