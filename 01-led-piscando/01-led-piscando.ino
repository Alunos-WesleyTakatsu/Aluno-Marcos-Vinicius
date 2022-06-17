int tempo = 1000;
  
void setup() {
  pinMode(3, OUTPUT);


}



void loop() {


  digitalWrite(3, LOW);

  delay(tempo);
  
  digitalWrite(3, HIGH);

  delay(tempo);
    
  tempo = tempo - 100;

  if (tempo < 100){
    tempo = 1000;
  }
  
  
 
}
