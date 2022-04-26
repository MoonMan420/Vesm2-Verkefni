/*
  Kóðinn byggir á kóða héðan: https://dronebotworkshop.com/433mhz-rf-modules-arduino/#Demo_2_Transmitter_Code

  Sendikóðinn - Settur upp á Arduino Nano
*/

// Söfn fyrir 433-MHz staðalinn
#include <RH_ASK.h>
#include <SPI.h> 

// Safn fyrir DHT11 o.fl. Ef þú færð villu á þessa línu 
// þarftu að setja inn "DHT Sensor library" sem þú finnur
// í Sketch->Include library->Manage Libraries...
#include "DHT.h";

const int dht_pinninn = 7;  // gagnapinninn fyrir DHT

// breytur fyrir raka og hitastig, ath. þær eru af taginu float (32 bita)
// af því að mælirinn skilar kommutölum (t.d. hiti 24.5)
float raki;
float hiti;

// tveggja staka fylki, verður notað þegar senda á gögnin
float maelingar[2]; 

RH_ASK sendir; 

// tilvik af raka og hitamælinum
DHT maelir(dht_pinninn, DHT11);

void setup() {
  // virkja sendinn
  sendir.init();
  // virkja DHT skynjarann
  maelir.begin();
}

void loop() {
  raki = maelir.readHumidity();  // Lesa rakastigið (skilar float)
  hiti = maelir.readTemperature();  // Lesa hitastigið (skilar float)

  // skrifum gögnin í fylkið
  maelingar[0] = raki;
  maelingar[1] = hiti;

  // sendum fylkið, sjá skýringar í verkefnalýsingu á þessari línu
  sendir.send((unsigned char*)maelingar, sizeof(maelingar));
  // stoppar forritið þar til búið er að senda öll gögnin
  sendir.waitPacketSent();  
}