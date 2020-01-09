#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <httpHelper.h>

String K;
void setup() {

  WiFi.begin(ssid, password);
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.printf("Heap Size %d\r\n", ESP.getFreePsram());
  Serial.printf("Heap Size %d\r\n", ESP.getFreeHeap());
  
  K.reserve(1000);
  Serial.printf("Heap Size %d\r\n", ESP.getFreePsram());
  Serial.printf("Heap Size %d\r\n", ESP.getFreeHeap());
  Serial.printf("Available Heap Space: %d\n", esp_get_free_heap_size());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Update whitelist");
  if ((WiFi.status() == WL_CONNECTED)) {
    // Serial.println("Update whitelist");
    // Debug
    uint32_t mTime = micros();

    HTTPClient http;
    http.begin(whiteListURL, root_ca); //Specify the URL and certificate  
    // Set token
    http.addHeader(nameHeader,token,false,true);
    int httpCode = http.GET(); //Make the request
    Serial.println("HTTP GET");
    Serial.printf("updateWhiteList: %d\r\n", micros() - mTime);
    if (httpCode > 0) { //Check for the returning code
    // Serial.printf("Time to request %d\r\n",micros()-mTime);
    // Serial.printf("HTTP response code: %d\r\n",httpCode);
      Serial.println("HTTP response");
      K += http.getString();
      Serial.println(K);
      Serial.printf("Heap Size %d\r\n", ESP.getFreePsram());
      Serial.printf("Heap Size %d\r\n", ESP.getFreeHeap());
      Serial.printf("Available Heap Space: %d\n", esp_get_free_heap_size());
    }
  }
  delay(10000);
}