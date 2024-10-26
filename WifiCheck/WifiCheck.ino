#include <WiFi.h>

// Replace with your network credentials
const char* ssid = "_________";
const char* password = "___________";

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Start Wi-Fi connection
  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");

  // Wait until the connection is established
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  
  // Print IP address once connected
  Serial.println("");
  Serial.println("Connected to WiFi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  // Check the Wi-Fi connection status
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("WiFi Disconnected!");
    
    // Try to reconnect
    WiFi.disconnect();
    WiFi.begin(ssid, password);
    
    while (WiFi.status() != WL_CONNECTED) {
      delay(1000);
      Serial.print(".");
    }

    Serial.println("");
    Serial.println("Reconnected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("WiFi Connected");
  }

  delay(5000);  // Check every 5 seconds
}
