// Tengja saman SDA (A4), SCL (A5) og GND á Arduino borðunum
// Nano virkar hér sem þjónn (slave/peripheral)

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
  
    int x = Wire.read();      // receive byte as an integer
    int y = Wire.read();      // receive byte as an integer

    Serial.print(x);           // print the integer
    Serial.print("\t");        // print tab 
    Serial.println(y);         // print the integer and then enter
    
}
