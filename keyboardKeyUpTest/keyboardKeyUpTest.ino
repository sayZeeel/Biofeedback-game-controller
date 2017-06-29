// HID code 
	/**/
  void setup() {
    pinMode( 2 ,OUTPUT);
    pinMode(3 , INPUT);
    digitalWrite(2,HIGH);
   }
  
  void loop() {
    if(digitalRead(3) == LOW)
    Keyboard.write(218);// code for UpArrowKey
    delay(1000);  
  }	

