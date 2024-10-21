#define FLASH_GPIO 4 // GPIO pin for the flashlight

void setup() {
  // Initialize the GPIO pin for the flashlight
  pinMode(FLASH_GPIO, OUTPUT);
}

void loop() {
  // Turn the flashlight ON
  digitalWrite(FLASH_GPIO, HIGH);
  delay(1000);  // Keep it ON for 1 second

  // Turn the flashlight OFF
  digitalWrite(FLASH_GPIO, LOW);
  delay(1000);  // Keep it OFF for 1 second
}
