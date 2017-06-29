  

 
void setup() {
  Serial.begin(9600);  }
  
  void loop() {
    int sensorValue = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
 

    
    if(voltage > 2.5)
    Keyboard.write(218);// code for UpArrowKey
    delay(100);  
  }	


