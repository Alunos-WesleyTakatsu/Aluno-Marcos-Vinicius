int tempo = 100;
int voltaatual;
int totalvoltas = 5;
  
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}



void loop() {

  //voltaatual = 1;
  for ( voltaatual = 1 ; voltaatual <= totalvoltas ; voltaatual++){
  //while (voltaatual <= totalvoltas){
    
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  
    delay(tempo);
    
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  
    delay(tempo);
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    
    delay(tempo);

    //voltaatual = voltaatual +1;
  }
   
  //voltaatual = 1;

  //while (voltaatual <= totalvoltas){
  for ( voltaatual = 1 ; voltaatual <= totalvoltas ; voltaatual++){  
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);

    delay(tempo);
  
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  
    delay(tempo);
    
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    
    delay(tempo);

    //voltaatual = voltaatual + 1;
  }
}
