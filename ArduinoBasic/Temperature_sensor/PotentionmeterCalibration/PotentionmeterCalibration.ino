int pot = A0;
int potMin=32;
int potMax=1023;
int led =3;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pot,INPUT);
pinMode(led,OUTPUT);
}

void loop() {
  int d = analogRead(pot);
 
  float bright=(d-potMin)*255./(potMax-potMin);
  Serial.print("POT= ");
  Serial.println(d);
  analogWrite(led,bright);
  Serial.print("LED= ");
  Serial.println(bright);
  delay(1000);
  

}
