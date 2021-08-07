int pushButton=8;
int pushPosition;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode(pushButton,INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
pushPosition =digitalRead(pushButton);
Serial.println(pushPosition);
delay(1000);
}
