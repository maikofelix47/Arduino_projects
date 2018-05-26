
#include <NewPing.h>

const int trig = 9;
const int echo = 10;
const int MAX_DISTANCE = 200;
long duration;
float distance;

NewPing sonar(trig,echo, MAX_DISTANCE);

void setup() {
  //initalize input and ouput
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(50);
 unsigned int uS = sonar.ping();
 Serial.print("Ping: ");
 Serial.print(sonar.convert_cm(uS)); // Convert ping time to distance and print result (0 = outside set distance range, no ping echo)
 Serial.println("cm");

}
