/*
  Kóðinn byggir á kóða héðan: https://dronebotworkshop.com/433mhz-rf-modules-arduino/#Demo_2_Receiver_Code

  Móttökukóðinn - Settur upp á Arduino Uno
*/

// Söfn fyrir 433-MHz staðalinn
#include <RH_ASK.h>
#include <SPI.h> 

RH_ASK mottakari;

// tveggja staka fylki, verður notað þegar tekið verður á móti gögnunum
// ath. fylkið er af taginu float (2 * 32 bitar = 64 bitar eða 8 bæti) 
float maelingar[2]; 

void setup() {
    // virkja móttakarann
    mottakari.init();
    Serial.begin(9600);
}

void loop() {
  
  // Búum til tímabundna geymslu fyrir móttökuna sem er jafn stór
  // og stærðin á gögnunum sem við sendum frá Nano
  // höfum hana af taginu unsigned char af því að þannig 
  // bersta gögnin okkur frá sendinum (Nano)
  unsigned char minni[8]; // 8 bæti að stærð (2 * 32 bitar)
  // hversu stórt er minnið
  unsigned char staerd_minnis = sizeof(maelingar);

  // athugum hvort við tókum á móti réttum gögnum
  if (mottakari.recv(minni, &staerd_minnis)) {
    // afritum gögnin úr char minnishólfum (8 bitar) í float minnishólfin (32 bitar)
    memcpy(maelingar, minni, staerd_minnis);
  }
      
  Serial.print("Móttakari - Raki: ");
  Serial.print(maelingar[0]);
  Serial.print("  - Hiti: ");
  Serial.println(maelingar[1]);
               
}
