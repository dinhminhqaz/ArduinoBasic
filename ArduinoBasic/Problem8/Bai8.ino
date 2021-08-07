 int myPin=A2;
 int readVal;
 float V2;
 int dt=250;
int bluePin= 9;











void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin, INPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myPin);
V2=(5./1023.)*readVal;
Serial.print("Potentiometer Voltage is ");
Serial.println(V2);
if(V2>2.5){
  digitalWrite(bluePin,HIGH);
}

if(V2<2.5){
  digitalWrite(bluePin,LOW);
}
delay(dt);
}
