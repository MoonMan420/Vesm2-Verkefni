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
Kynntu þér [433MHz RF](https://lastminuteengineers.com/433mhz-rf-wireless-arduino-tutorial/) og settu upp kóðadæmið í greinni með Arduino Uno og Nano. Þú finnur RadioHead safnið [hér](http://www.airspayce.com/mikem/arduino/RadioHead/RadioHead-1.121.zip).

1. (10%) Fylgdu eftir [Demo 2 – Sending Sensor Data](https://dronebotworkshop.com/433mhz-rf-modules-arduino#Demo_2_8211_Sending_Sensor_Data) með DHT11 og 433MHz RF (**ATH.** í greininni er verið að vinna með DHT22, þú þarft því að breyta línu 23 í sendingakóðanum), hafðu sendinn á Nano og móttakarann á Uno.

2. (30%) Tengdu núna stýripinnann við Nano og sendu X, Y og takkastöðuna yfir á Uno-inn og birtu í Serial Monitor. Þú sendir streng frá Nano en þarft að vinna með gildin sem heiltölur á Uno, leystu það. 

---

## Námsmat og skil

- Yfirferð og námsmat á sér stað í tíma.
- Gefið er heilt fyrir fullnægjandi útfærslu, hálft ef ábótavant, ekkert ef stórlega ábótavant eða vantar.
- Skilaðu á Innu kóðalausnum.
