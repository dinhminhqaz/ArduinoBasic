
int potVal;
int dt=1000;
int potPin=A0;
float V;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal= analogRead(potPin);
V=(5./1023.)*potVal;
Serial.println(V);
delay(dt);

}
