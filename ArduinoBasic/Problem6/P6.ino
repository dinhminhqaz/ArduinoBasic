float pi=3.14;
int r=1;
String mess1= "A circle has a radius of ";
String mess2= " Also has a area of ";







void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
float area= r*r*pi;
Serial.print( mess1 );
Serial.println( r);
Serial.print( mess2 );
Serial.print(" ");
Serial.println( area);
r=r+1;
delay(1000);
}
