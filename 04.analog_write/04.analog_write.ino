const int RED_PIN = 9; 
int brightness = 0;    

void setup() {
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // Update the brightness of the LED
  analogWrite(RED_PIN, brightness);
  
  delay(500);
  
  // Increase brightness (value wraps around after 255)
  brightness = (brightness + 10) % 256;
}