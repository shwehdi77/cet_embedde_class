
const byte R_led =13;
const byte Y_led =12;
const byte G_led =11;
const byte button =2;
int red_delay=500;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(R_led, OUTPUT);
  pinMode(Y_led, OUTPUT);
  pinMode(G_led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  //attachInterrupt(digitalPinToInterrupt(2), Pedestrian, RISING);
}
/*void Pedestrian(){
  red_delay=2000;

}*/
// the loop function runs over and over again forever
void loop() {
  byte b_press=digitalRead(button);
  if(!b_press){red_delay=2000;}

  digitalWrite(R_led, HIGH); 
  digitalWrite(Y_led, LOW); 
  digitalWrite(G_led, LOW); 
  delay(red_delay); 
  if(red_delay==2000){red_delay=500;}
  
  digitalWrite(R_led, LOW); 
  digitalWrite(G_led, LOW); 
  for(byte i=0;i<3;i++) 
  {
  
  digitalWrite(Y_led, HIGH); 
  delay(500);     
  digitalWrite(Y_led, LOW); 
  delay(500);   
  }                    
    
     
  digitalWrite(R_led, LOW); 
  digitalWrite(Y_led,LOW ); 
  digitalWrite(G_led, HIGH);  
  delay(500);                 
}
