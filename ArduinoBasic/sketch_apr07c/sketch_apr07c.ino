#define pinLedRed   9
#define pinLedGreen 10
#define pinLedBlue  11

#define pinAnaLight A0    //Chan ket noi voi A0 cua module cam bien anh sang 
void setup ()
{
  // Cai dat huong cac chan 
   pinMode(pinLedRed, OUTPUT);
   pinMode(pinLedGreen, OUTPUT);
   pinMode(pinLedBlue, OUTPUT);
   // LED RGB OFF
   digitalWrite(pinLedRed, LOW);
   digitalWrite(pinLedGreen, LOW);
   digitalWrite(pinLedBlue, LOW);

   pinMode(pinAnaLight, INPUT);
   // KHoi tao serial 
   Serial.begin(115200);
   Serial.println("Inital serial");
   
}

void loop()
{
  unsigned int AnalogValue;
  AnalogValue = analogRead(pinAnaLight);
  Serial.println(AnalogValue);
  if(AnalogValue < 350){
    digitalWrite(pinLedRed, HIGH);
    digitalWrite(pinLedGreen, LOW);
    digitalWrite(pinLedBlue, LOW);
    Serial.println("The light intensity : HIGH");
    
  }else if (AnalogValue >350 && AnalogValue <800){
    digitalWrite(pinLedRed, LOW);
    digitalWrite(pinLedGreen, HIGH);
    digitalWrite(pinLedBlue, LOW);
    Serial.println("The light intensity : MEIDUM");
  }else if ( AnalogValue >800){
    digitalWrite(pinLedRed, LOW);
    digitalWrite(pinLedGreen, LOW);
    digitalWrite(pinLedBlue, HIGH);
    Serial.println("The light intensity : LOW");
  }
  delay (100);
  
}
