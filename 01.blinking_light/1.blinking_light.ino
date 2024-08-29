void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
int delayTime = 500; 
digitalWrite(13, HIGH);
delay(delayTime);
digitalWrite(13, LOW);
delay(delayTime);
}
