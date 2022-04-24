// Tengja saman SDA (A4), SCL (A5) og GND á Arduino borðunum

// Þessi Arduino virkar sem þjónn (slave/peripheral)

#include <Wire.h> // kóðasafnið fyrir I2C

const int ljos = 2;
int ljosa_stada = LOW;

void mottaka(int); // skilgreining á falli, sjá útfærslu neðar

void setup() {
  
  Wire.begin(4);            // Virkjar I2C og velur að vera nr. 4
  Wire.onReceive(mottaka); 	// Hvaða fall á að kalla á þegar eitthvað er móttekið
  
  pinMode(ljos, OUTPUT);
}

void loop() {
  digitalWrite(ljos, ljosa_stada);
  delay(100);
}

// Fallið keyrir þegar þjónninn móttekur eitthvað frá stjórnandanum
void mottaka(int staerd) {
  ljosa_stada = Wire.read(); // lesa það sem er móttekið og skrifa í ljosa_stada breytuna
  
  // Þar sem takkinn á stjórnandanum er tengdur sem PULLUP víxlum við stöðunni
  if(ljosa_stada == 1) {
    ljosa_stada = LOW;
  } else {
    ljosa_stada = HIGH;
  }
}