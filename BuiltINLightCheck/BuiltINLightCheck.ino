// Define the LED pin
#define LED_BUILTIN 2  // Change to 5 if 2 doesn't work

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); // Wait for 500 milliseconds

  // Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
  delay(500); // Wait for 500 milliseconds
}
