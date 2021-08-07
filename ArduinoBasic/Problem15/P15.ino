int lightPen=A0;
int lightVal;
int dv=250;
int yellowPin=9;
int bluePin=8;





void setup() {
  // put your setup code here, to run once:
pinMode(lightPen,INPUT);
pinMode(yellowPin,OUTPUT);
pinMode(bluePin,OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPen);
Serial.println(lightVal);
delay(dv);
if (lightVal>350){
  digitalWrite(yellowPin,HIGH);
  digitalWrite(bluePin,LOW);
  
}
delay(2000);
if (lightVal<350){
  digitalWrite(yellowPin,LOW);
  digitalWrite(bluePin,HIGH);
  
}
}
