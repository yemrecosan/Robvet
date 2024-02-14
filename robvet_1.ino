#include "MyCobotBasic.h"
#include <ParameterList.h>
MyCobotBasic myCobot;
Angles angles = { -0.0, -0.0, -0.0, -0.0, -0.0, -0.0 };
void setup(){
    Serial.begin(115200);
    myCobot.setup();
    myCobot.powerOn();
    delay(100);
  myCobot.setGripperIni();
  delay(20);angles = { 0, 0, 0, 0, 0, -45};
  myCobot.writeAngles(angles, 20);
  delay(3000);
  angles = { 0, 0, -90, 0, 0, 90};
  myCobot.writeAngles(angles, 30);
  delay(6000);
  //Silgiyi alır
  myCobot.setEncoder(7,4000);
  delay(3000);
  angles = { 0, 0, -135, 35, 0, 90};
  myCobot.writeAngles(angles, 30);
  delay(5000);
  myCobot.setEncoder(7,1000);
  delay(3000);
  Angles point1 = { 0, 0, 0, 0, -90, -45};
  myCobot.writeAngles(point1, 15);delay(5000);
  for (int i = 0; i <=2; i++){
  Angles point2 = { 0, 0, 60, 0, -90, -45 };
  myCobot.writeAngles(point2, 25);
  delay(4000);
  point2 = { 0, 0, -60, 0, -90, -45};
  myCobot.writeAngles(point2, 25);
  delay(4000);
  }
  angles = { 0, 0, -120, 35, 0, 90};
  myCobot.writeAngles(angles, 30);
  delay(5000);
  myCobot.setEncoder(7, 4000);
  delay(3000);
  point1 = { 0, 0, 0, 0, -90, 90};
  myCobot.writeAngles(point1, 15);
  delay(5000);
}


void loop(){
}

