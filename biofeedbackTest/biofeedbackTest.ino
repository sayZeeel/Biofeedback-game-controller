  
// you need to install the arduino keyboard library before using this code
 //#include "Keyboard"
void setup() {
  Serial.begin(9600);  }
  
  void loop() {
    int sensorValue = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
 

    
    if(voltage > 3)//normal emg sensor value is below 3
    Keyboard.write(218);// code for UpArrowKey
    delay(100);  
  }	


