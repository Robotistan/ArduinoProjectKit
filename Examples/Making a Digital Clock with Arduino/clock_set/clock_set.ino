#include <virtuabotixRTC.h>                           // Add The Library
int CLK_PIN = 6;                                      // 6th pin is defined as clock pin
int DAT_PIN = 7;                                      // 7th pin is defined as data pin
int RST_PIN = 8;                                      // 8th pin is defined as reset pin
virtuabotixRTC myRTC(CLK_PIN, DAT_PIN, RST_PIN);      // The library is assign to pins

void setup() {
 Serial.begin(9600);                                  // Begining Seriel Communication
 myRTC.setDS1302Time(10, 10, 14, 4, 13, 9, 2018);     // Setting clock options
}

void loop() {
 myRTC.updateTime();                                   // Reading the time from RTC

 Serial.print("Tarih / Saat: ");                       // Display the datas on serial port.S
 Serial.print(myRTC.dayofmonth);
 Serial.print("/");
 Serial.print(myRTC.month);
 Serial.print("/");
 Serial.print(myRTC.year);
 Serial.print(" ");
 Serial.print(myRTC.hours);
 Serial.print(":");
 Serial.print(myRTC.minutes);
 Serial.print(":");
 Serial.println(myRTC.seconds);

 delay(1000);                                          // Delay one second
}
