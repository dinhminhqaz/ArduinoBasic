int potVal;
int dt=1000;
int potPin=A0;
int ledPin=3;
float V;
float B;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin,INPUT);
pinMode(ledPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
V=(5./1023.)*potVal;
B=(255./5.)*V;
Serial.println(B);

delay(dt);

analogWrite(ledPin,B);









}
