// I Darius Luft, 000798737, certify that all code submitted is my own work; that I have not copied it from any other source. I also certify that I have not allowed my work to be copied by others. 
#include <Arduino.h>

bool lightState = false;

void setup() {
  // configure the USB serial monitor 
  Serial.begin(115200); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT);

  // configure the pushbutton
  pinMode(D5, INPUT_PULLUP); 
 
  // set default PWM range 
  analogWriteRange(1023);
}

void loop() {
  int iButton;
  int iVal = analogRead(A0);
  iButton = digitalRead(D5);  

  if (iButton == 0){
    if (lightState){
      lightState = false;}
    else {
      lightState = true;}}
  
  if (lightState){
    analogWrite(D4, iVal);}
  else{
    analogWrite(D4, 1023);}


while (iButton == 0)
{
  delay(1);
  iButton = digitalRead(D5);
}
  // put your main code here, to run repeatedly:
}