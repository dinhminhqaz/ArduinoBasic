int redLED=8;
int greenLED=9;
int yellowLED=10;
int blueLED=11;
int summer=20;
int autumn=10;
int winter=30;
int spring=40;
String myName="Dinh Quang Minh";



void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED,HIGH);
  delay (autumn);
  digitalWrite(redLED, LOW);
  delay (autumn);

   digitalWrite(greenLED,HIGH);
  delay (summer);
  digitalWrite(greenLED, LOW);
  delay (summer);

digitalWrite(yellowLED,HIGH);
  delay (winter);
  digitalWrite(yellowLED, LOW);
  delay (winter);

digitalWrite(blueLED,HIGH);
  delay (spring);
  digitalWrite(blueLED, LOW);
  delay (spring                           );

delay(10);
}
