// HID code 
	/*this code can be used with any hid enabled device, make sure that pin 3 is high if u want to upload any other code after uploading 
	this one*/
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

