# Tímaverkefni 10

- 10% af heildareinkunn
- Aruino Nano, I<sup>2</sup>C og 433MHz RF
- Einstaklingsverkefni

---

## 1 Arduino Nano (10%)
Arduino Nano er alveg eins og Arduino Uno fyrir utan að Nano er minni og pinnarnir eru ekki á sömu stöðum og á Uno, [mynd með staðsetningu pinnanna á Nano](https://i2.wp.com/christianto.tjahyadi.com/wp-content/uploads/2014/11/nano.jpg).

**Athuga, þegar hlaða á forriti á Arduino Nano:**
- Það þarf að gera eftirfarandi stillingar í Arduino forritinu:
  - Tools -> Board: Velja **Arduino Nano**
  - Tools -> Programmer: Velja **ATmega328P (Old Bootloader)**
  - Þú gætir þurft að setja upp [CH340 rekilinn](https://sparks.gogo.co.nz/ch340.html) fyrir Nano á tölvuna þína.
  
:warning: **Muna svo að breyta til baka þegar þú ætlar að hlaða forriti á Arduino Uno.**

Verkefni: Settu upp rás sem inniheldur eitt LED (ásamt viðnámi) og einn takka. Þegar ýtt er á takkann á að kvikna á LED perunni.

## 2 I<sup>2</sup>C (50%)
Kynntu þér hvernig Inter-Integrated Circuit (I<sup>2</sup>C) virkar með því að lesa þessa [grein](https://www.circuitbasics.com/how-to-set-up-i2c-communication-for-arduino/) (lestu **að** *HARDWARE COMPONENTS*).

1. (10%) Settu [þennan](https://github.com/VESM2VT/arduino/blob/main/kodasynidaemi/i2c_nano.ino) kóða upp á Nano-inn og tengdu við hann einn takka (þú sérð út frá kóðanum við hvaða pinna takkinn á að tengjast). Settu svo [þennan](https://github.com/VESM2VT/arduino/blob/main/kodasynidaemi/i2c_uno.ino) kóða inn á Uno-inn. 
2. (40%) I<sup>2</sup>C sendir bara eitt bæti í einu. Þegar senda á fleiri en eitt gildi má nota aðra af eftirfarandi aðferðum:
   1. Vera með margar `Wire.write(gildi)` línur.
   2. Búa til fylki (svipað og listi í python) og senda það svo með `Wire.write(nafn_fylkis, stærð)` þar sem stærð er fjöldi staka í fylkinu. Fylkið þarf að vera af taginu `unsigned char` eða `byte` (en á bak við tjöldin er það sama tagið).   
    
    Þegar mörg gildi eru svo móttekin eru hafðar eins margar `Wire.read()` línur og gildin sem taka á móti eru mörg.

    Tengdu núna stýripinnann við Nano og sendu X, Y og takkastöðuna yfir á Uno-inn og birtu í Serial Monitor (`analogRead` skilar 10 bita tölu en þú getur bara sent 8 bita (1 bæt), þú þarft því að leysa það mál). 

---

## 3 433MHz RF (40%)
Kynntu þér [433MHz RF](https://lastminuteengineers.com/433mhz-rf-wireless-arduino-tutorial/) og settu upp kóðadæmið í greinni með Arduino Uno og Nano. Þú finnur RadioHead (RH_ASK) safnið [hér](http://www.airspayce.com/mikem/arduino/RadioHead/RadioHead-1.121.zip).

1. (10%) Fylgdu eftir [Demo 2 – Sending Sensor Data](https://dronebotworkshop.com/433mhz-rf-modules-arduino#Demo_2_8211_Sending_Sensor_Data) með DHT11 (G tengist í GND, V í 5V og S í digital pinna) og 433MHz RF. **Ekki** nota kóðann úr greininni heldur skaltu nota [þenna kóða](https://github.com/VESM2VT/arduino/blob/main/kodasynidaemi/433_dht_nano.ino) fyrir sendinn (Nano) og [þennan kóða](https://github.com/VESM2VT/arduino/blob/main/kodasynidaemi/433_dht_uno.ino) fyrir móttakarann (Uno).

    *Skýringar á línunni `sendir.send((unsigned char*)maelingar, sizeof(maelingar))` í sendi forritinu:* Forritararnir sem skrifuðu RH_ASK safnið ákváðu að `send` fallið tæki bara við gögnum á forminu `unsigned char*` (unsigned char bendir (e. pointer)). Það þýðir að gögnin eru ekki send inn í fallið heldur er vísað á hvar þau eru í vinnsluminninu. Gögnin verða einnig að vera af taginu `unsigned char` þ.e.a.s. 8 bita stafir. Gögnin okkar (raki og hiti) eru aftur á móti geymd í `float` fylki en eins og allt sem tölvur vinna með þá eru gögnin á bitaforminu (e. binary). Ef rakinn (`maelingar[0]`) er t.d. 48.7 þá er það geymt í minninu sem `01000010010000101100110011001101` og hitinn (`maelingar[1]`) er t.d. 25.3 þá er það geymt sem `01000001110010100110011001100110`. Fylkið `maelingar` inniheldur því `0100001001000010110011001100110101000001110010100110011001100110` en til að `send` fallið geti unnið með það þá þurfum við að "plata" fallið þannig að það haldi að það sé að vinna með átta bita tölur. Þegar við setjum `(unsigned char*)` fyrir framan nafnið á fylkinu þá erum við að segja við fallið að gögnin líti svona út: `01000010 01000010 11001100 11001101 01000001 11001010 01100110 01100110` og þá sér fallið átta 8 bita stafi og það er það sem fallið vill vinna með. `sizeof(maelingar)` gefur okkur svo stærðina á fylkinu í bætum talið og það er einmitt átta bæti að stærð (2 * 32 bitar = 64 bitar eða 8 bæti).

2. (30%) Tengdu núna stýripinnann við Nano og sendu X, Y og takkastöðuna yfir á Uno-inn og birtu í Serial Monitor.
---

## Námsmat og skil

- Yfirferð og námsmat á sér stað í tíma.
- Gefið er heilt fyrir fullnægjandi útfærslu, hálft ef ábótavant, ekkert ef stórlega ábótavant eða vantar.
- Skilaðu á Innu kóðalausnum.
