int Xpin= A0;
int Ypin =A1;
int Spin=2;
int Xval;
int Yval;
int Sval;





void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(Spin,INPUT);
digitalWrite(Spin,HIGH);


}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Sval=digitalRead(Spin);
delay (200);

Serial.print(" Xval is ");
Serial.println(Xval);
Serial.println("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");

Serial.print(" Yval is   ");
Serial.println( Yval );
Serial.println("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");

Serial.print(" Sval is ");
Serial.println( Sval);
Serial.println("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
delay(2000);

}
