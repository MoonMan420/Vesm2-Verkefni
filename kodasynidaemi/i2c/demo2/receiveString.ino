// Tengja saman SDA (A4), SCL (A5) og GND á Arduino borðunum
// Þessi Arduino virkar sem þjónn (slave/peripheral)
// Notum Nano 

#include <Wire.h>             // kóðasafnið fyrir I2C
void mottaka(int);            // skilgreining á falli, sjá útfærslu neðar

void setup() {  
  Wire.begin(4);             // Virkjar I2C og velur að vera nr. 4
  Wire.onReceive(mottaka);   // Hvaða fall á að kalla á þegar eitthvað er móttekið
  Serial.begin(9600);        
}

void loop() {
  delay(100);
}

// Fallið keyrir þegar þjónninn móttekur eitthvað frá stjórnandanum
void mottaka(int staerd) {
 
  while (Wire.available()) {   // peripheral may send less than requested
    char c = Wire.read();      // receive a byte as character
    Serial.print(c);           // print the character
  }
  Serial.print('\n'); // prints a new line character
}
