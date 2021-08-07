#include <Stepper.h>
int stepsPerRevolution=2048;
int motSpeed=50;
Stepper myStepper(stepsPerRevolution, 8,9,10,11);
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(stepsPerRevolution);
delay(500);
myStepper.step(-stepsPerRevolution);
delay(500);

}
