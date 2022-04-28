// Tengja saman SDA (A4), SCL (A5) og GND á Arduino borðunum
// Arduino Uno er hér stjórnandi (master/controller)

#include <Wire.h>                // kóðasafnið fyrir I2C

// byte range: 0 - 255
byte x = 0;
byte y = 255;

void setup() {
  Wire.begin();                  // virkja I2C, (address optional for master)
}

void loop() {
  Wire.beginTransmission(4);     // hefja samskipti við Arduino, addressa nr. 4
  Wire.write(x);                 // sendum 1 byte
  Wire.write(y);                 // sendum 1 byte
  Wire.endTransmission();        // ljúka samskiptum

  x++;
  y--;
  
  delay(100);                    // gefum móttakanda smá tíma að fá gögn.
}
