/*
  Read Temperature and Humidity
  DHT11 Library
  Author: Bonezegei (Jofel Batutay)
  Date : November 2023

  Tested using ESP32-WROOM32
*/
#include "model.h"

Eloquent::ML::Port::DecisionTree classifier;

#include <Bonezegei_DHT11.h>

//param = DHT11 signal pin
Bonezegei_DHT11 dht(2);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {

  if (dht.getData()) {                         // get All data from DHT11
    float Temp = dht.getTemperature();      // return temperature in celsius
    int Humidity = dht.getHumidity();               // return humidity
    int Rainfall = 120;
    float irisSample[3] = { Temp, Humidity, Rainfall };
    String predictClass = classifier.predictLabel(irisSample);

    
    Serial.print("Temp: ");
    Serial.print(Temp);
    Serial.print(" Hum: ");
    Serial.print(Humidity);
    Serial.print(" Rainfall: ");
    Serial.print(Rainfall);
    Serial.print(" Crop: ");
    Serial.println(predictClass);
  }
  delay(5000);  //delay atleast 2 seconds for DHT11 to read tha data
}
