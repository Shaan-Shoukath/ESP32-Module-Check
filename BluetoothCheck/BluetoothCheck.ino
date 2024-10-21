#include "BluetoothSerial.h"  // Library for Bluetooth

// Create a BluetoothSerial object
BluetoothSerial ESP_BT;

// Bluetooth device name
const char* btName = "ESP32_BT_Device";

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  Serial.println("Starting Bluetooth...");

  // Initialize Bluetooth
  if (!ESP_BT.begin(btName)) {
    Serial.println("Bluetooth initialization failed!");
    while (true);  // Stop the program if Bluetooth fails to initialize
  }

  Serial.println("Bluetooth initialized. Device is discoverable.");
  Serial.print("Bluetooth Device Name: ");
  Serial.println(btName);
}

void loop() {
  // Check if there is an active Bluetooth connection
  if (ESP_BT.hasClient()) {
    Serial.println("Bluetooth device connected!");
  } else {
    Serial.println("No Bluetooth connection.");
  }

  // Delay between checks
  delay(5000);  // Check every 5 seconds
}

