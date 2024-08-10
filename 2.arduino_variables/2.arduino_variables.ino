// put variables you want to use here
int LEDpin = 8;
int delay_s = 250;
int delay_l = 700;

void setup() {
  // put your setup code here, to run once:
    pimMode(LEDpin, OUTPUT);
}

void loop() {
  // the 's' morse code
  digitalWrite(LEDpin, HIGH);
  delay(delay_s);
  digitalWrite(LEDpin, LOW);
  delay(delay_s);
  
  digitalWrite(LEDpin, HIGH);
  delay(delay_s);
  digitalWrite(LEDpin, LOW);
  delay(delay_s);
  
  digitalWrite(LEDpin, HIGH);
  delay(delay_s);
  digitalWrite(LEDpin, LOW);
  delay(delay_s);

  // the 'o' morse code
  digitalWrite(LEDpin, HIGH);
  delay(delay_l);
  digitalWrite(LEDpin, LOW);
  delay(delay_l);
  
  digitalWrite(LEDpin, HIGH);
  delay(delay_l;
  digitalWrite(LEDpin, LOW);
  delay(delay_l);
  
  digitalWrite(LEDpin, HIGH);
  delay(delay_l);
  digitalWrite(LEDpin, LOW);
  delay(delay_l);

  // the 's' morse code
  digitalWrite(LEDpin, HIGH);
  delay(delay_s);
  digitalWrite(LEDpin, LOW);
  delay(delay_s);
  
  digitalWrite(LEDpin, HIGH);
  delay(delay_s);
  digitalWrite(LEDpin, LOW);
  delay(delay_s);
  
  digitalWrite(LEDpin, HIGH);
  delay(delay_s);
  digitalWrite(LEDpin, LOW);
  delay(delay_s);

  delay(2000);


}
