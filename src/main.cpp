// COMP-10184 – Mohawk College
// Application Name
//
// This program prints helloworld text to the USB port 
// where it is displayed on the computer
//
// @author  Thu Nguyen
// @id 000832893
//
// I created this work and I have not shared it with anyone else

// libraries
#include <Arduino.h>

// constants

#define   OUTPUT_TEXT   "\n\nHELLO WORLD"
#define   NAME          "Thu Nguyen"
#define   ID            "000832893"


// global variables

// function definitions
void setup() {
  // put your setup code here, to run once:  
  // start the USB serial monitor port
  Serial.begin(115200);

  //print helloworld to the USB port
  Serial.println(OUTPUT_TEXT);
  Serial.println(NAME);
  Serial.println(ID);
  Serial.println("\n\nInfo:");
  Serial.print("ESP8266 Chip ID: ");
  Serial.println(ESP.getChipId());
  Serial.print("Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Time: ");
  Serial.println(millis());  // prints time since program started
  delay(2000);               // wait 2 seconds so as not to send massive amounts of data
}

