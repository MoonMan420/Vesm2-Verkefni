// Tengja saman SDA (A4), SCL (A5) og GND á Arduino borðunum
// Þessi Arduino virkar sem stjórnandi (master/controller)
// Notum Uno 

#include <Wire.h>                // kóðasafnið fyrir I2C

void setup() {
  Wire.begin();                  // virkja I2C, (address optional for master)
}

void loop() {
  Wire.beginTransmission(4);     // hefja samskipti við Arduino addressa nr. 4
  Wire.write("hallo");           // sendum 5 bytes
  Wire.endTransmission();        // ljúka samskiptum
  
  delay(100);                    // gefum móttakanda smá tíma að vinna úr gögnum.
}
