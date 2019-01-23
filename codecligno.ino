#include "LedControl.h"
LedControl matrix(12, 11, 10,1);


void setup() {

  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);

  matrix.shutdown(0, false);

  Serial.begin(9600);
}

void loop() {

  matrix.clearDisplay(0);

  int bouton1 = digitalRead(7);

  int bouton2 = digitalRead(8);

  int bouton3 = digitalRead(9);

if (bouton1 == 1){

matrix.setLed(0,4 ,0 , true);
matrix.setLed(0,5 ,1 , true);
matrix.setLed(0,4 ,1 , true);
matrix.setLed(0,3 ,1 , true);
matrix.setLed(0,6 ,2 , true);
matrix.setLed(0,4 ,2 , true);
matrix.setLed(0,2 ,2 , true);
matrix.setLed(0,7 ,3 , true);
matrix.setLed(0,4 ,3 , true);
matrix.setLed(0,1 ,3 , true);
matrix.setLed(0,4 ,4 , true);
matrix.setLed(0,4 ,5 , true);
}
if (bouton2 == 1){

matrix.setLed(0,4 ,1 , true);
matrix.setLed(0,4 ,2 , true);
matrix.setLed(0,7 ,3 , true);
matrix.setLed(0,4 ,3 , true);
matrix.setLed(0,1 ,3 , true);
matrix.setLed(0,6 ,4 , true);
matrix.setLed(0,4 ,4 , true);
matrix.setLed(0,2 ,4 , true);
matrix.setLed(0,4 ,5 , true);
matrix.setLed(0,5 ,5 , true);
matrix.setLed(0,3 ,5 , true);
matrix.setLed(0,4 ,6 , true);
}

if (bouton3 == 1){
  
matrix.setLed(0,3 ,1 , true);
matrix.setLed(0,4 ,2 , true);
matrix.setLed(0,3, 2 , true);
matrix.setLed(0,5 ,3 , true);
matrix.setLed(0,3 ,3 , true);
matrix.setLed(0,6 ,4 , true);
matrix.setLed(0,3 ,4 , true);
matrix.setLed(0,5 ,5 , true);
matrix.setLed(0,3 ,5 , true);
matrix.setLed(0,4 ,6 , true);
matrix.setLed(0,3 ,6 , true);
matrix.setLed(0,3 ,7 , true);
//matrix.setLed(0,2 ,6 , true);
//matrix.setLed(0,2 ,7 , true);
delay (1000);
matrix.clearDisplay(0); 
delay (1000);
}



if (bouton1 == 0 && bouton2 == 0 && bouton3 == 0) {
 matrix.clearDisplay(0); 
 }

Serial.print("bouton 1 vaut : ");
Serial.print(bouton1);
Serial.print("bouton 2 vaut : ");
Serial.print(bouton2);
Serial.print("bouton 3 vaut : ");
Serial.println(bouton3);




}
