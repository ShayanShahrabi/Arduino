int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;

int counter = 0;

void setup() {
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {
  // Display the binary representation of the counter using LEDs
  digitalWrite(pin2, bitRead(counter, 0));
  digitalWrite(pin3, bitRead(counter, 1));
  digitalWrite(pin4, bitRead(counter, 2));
  digitalWrite(pin5, bitRead(counter, 3));
  
  // Increment the counter
  counter = (counter + 1) % 16; // 16 is the maximum count for 4 bits
  delay(1000); // Delay for 1 second
}