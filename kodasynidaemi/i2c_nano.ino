// Tengja saman SDA (A4), SCL (A5) og GND á Arduino borðunum

// Þessi Arduino virkar sem stjórnandi (master/controller) 

#include <Wire.h> // kóðasafnið fyrir I2C

const int takki = 3;
int takki_stada = HIGH;

void setup() {
  Wire.begin(); // virkja I2C
  pinMode(takki, INPUT_PULLUP);
}

void loop() {
  takki_stada = digitalRead(takki); // lesa stöðuna á takkanum
  
  Wire.beginTransmission(4); 		// hefja samskipti við Arduino nr. 4
  Wire.write(takki_stada);          // senda stöðuna á takkanum 
  Wire.endTransmission();    		// ljúka samskiptum

  delay(100);
}