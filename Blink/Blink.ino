int ledPin = 13;

void setup(){
  // initialize digital pin 13 as an output.
  pinMode(ledPin,OUTPUT);
   
  
}

void loop(){
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin,HIGH);

  //Wait for 1 sec
  delay(1000);

  // turn the LED off by making the voltage LOW
  digitalWrite(ledPin,LOW);

  //Wait for 1 second
  delay(1000);
  
}
