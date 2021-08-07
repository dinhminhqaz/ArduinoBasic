int sensorValue;
int sensorLow=1023;
int sensorHigh=0;








void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  

}

void loop()
{
 sensorValue= analogRead(A0);
  if (sensorValue > sensorHigh) {
 sensorHigh = sensorValue;
 }
 if (sensorValue < sensorLow) {
 sensorLow = sensorValue;
 }
  float ledValue= (sensorValue-sensorLow)*255./(sensorHigh-sensorLow);
  analogWrite(3,ledValue);
  Serial.println(sensorValue);
  Serial.println(ledValue);
  delay(1000);
}
