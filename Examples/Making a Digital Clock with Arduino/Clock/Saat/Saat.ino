#include <LiquidCrystal.h>                              // Add LCD Library 
#include <virtuabotixRTC.h>                             // Add LCD Lİbrary 

int CLK_PIN = 6;                                        // 6th pin is defined as clock pin 
int DAT_PIN = 7;                                        // 7th pin is defined as data pin
int RST_PIN = 8;                                        // 8th pin is defined as reset pin
virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);        // The library is assign to pins
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;   // Defines pin variables of LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);              // Sets pin connections of LCD 

void setup() {
  lcd.begin(16, 2);                                     // Sets aspect ratio of LCD                                
}
void loop() {
  
  myRTC.updateTime();                                   // Reads the time from RTC 
  
  lcd.clear();                                          // Cleaning the screen before getting start 
  lcd.setCursor(0,0);                                   // Starts to write at first row and first column 
  lcd.print(myRTC.dayofmonth);                          // Display the day on the screen
  lcd.print("/");
  lcd.print(myRTC.month);                               // Display the month on the screen
  lcd.print("/");
  lcd.print(myRTC.year);                                // Display the year on the screen
  lcd.setCursor(0, 1);                                  // Starts to write at second row and first column 
  lcd.print(myRTC.hours);                               // Display the hours on the screen
  lcd.print(":");
  lcd.print(myRTC.minutes);                             // Display the minutes on the screen.   
  lcd.print(":");
  lcd.print(myRTC.seconds);                             // Display the seconds on the screen
  delay(1000);                                          // Delay for one second
}
