int j = 1;
int delay_time = 760; 
String my_string = "Counter value is: "; 

void setup() {
  Serial.begin(9600);  // Initialize serial communication at 9600 baud rate
  Serial.println("Starting the Counter Program!"); // Print a message at the start
}

void loop() {
  Serial.print(my_string);
  Serial.println(j); 
  j += 1; 
  delay(delay_time); 
  if (j % 5 == 0) { // Add some fun by checking if the counter is divisible by 5
    Serial.println("Woohoo! Multiple of 5 reached!"); // Print a celebratory message
  }
  if (j == 10) { // Another fun condition
    Serial.println("Double digits achieved!"); // Celebrate reaching double digits
  }
  if (j == 20) { // Yet another fun condition
    Serial.println("We've hit 20!"); // Celebrate reaching 20
  }
  if (j == 30) { // Keep the fun going
    Serial.println("30 - The magic number!"); // A magical message for 30
  }
  if (j == 42) { // A mysterious number
    Serial.println("42 - The answer to life, the universe, and everything!"); // Hitchhiker's Guide to the Galaxy reference
  }
}