 /******************************************************************* 
  Example sketch utilizing AnduinoLCD Library to display a digital 
  gauge style screen of an analog input. 
  
  Check out the included Arduino sketch examples and Anduino Wiki to 
  get started!
  https://github.com/andium/Anduino/wiki

  Written by Brian Carbonette Copyright © 2017 Andium 
  
  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at
 
  http://www.apache.org/licenses/LICENSE-2.0
 
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 *******************************************************************/
 
/* Include the AnduinoLCD ST7735 specific library */
#include "AnduinoLCD.h"

/*Create an instance of the AnduinoLCD */
AnduinoLCD LCD = AnduinoLCD(ST7735_CS_PIN, ST7735_DC_PIN, PERIPH_RST_PIN);

void setup() {

  LCD.begin();
  LCD.setBacklight(ON);
  LCD.fillScreen(ST7735_BLACK);         //clear the screen 
  
  //Setup static text
  LCD.showBanner();                     //load Andium Banner
  LCD.setTextColor(ST7735_WHITE);            //white
  LCD.setTextSize(2);
  LCD.setCursor(0,40);
  LCD.print("Sensor Value:"); //positioned just under banner 
  LCD.println();
  LCD.setTextSize(5);                   // set the font size larger for the digital reading

}

void loop() {

  LCD.digitalGauge(A1);  

}