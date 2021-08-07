int yellowPin=6;
int redPin=9;
int yellowDt=500;
int redDt=500;
int yellowBlink=4;
int redBlink =6;
int j;





void setup() {
  // put your setup code here, to run once:
pinMode(yellowPin,OUTPUT);
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j=1; j<=4;j=j+1){
  digitalWrite (yellowPin,HIGH);
  delay(yellowDt);
  digitalWrite(yellowPin,LOW);
  delay(yellowDt);
 
}
for(j=1; j<=6;j=j+1){
  digitalWrite (redPin,HIGH);
  delay(redDt);
  digitalWrite(redPin,LOW);
  delay(redDt);
 
}

}
