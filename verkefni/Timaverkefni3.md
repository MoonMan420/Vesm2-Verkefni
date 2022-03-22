
# Tímaverkefni 3 

- 10% af heildareinkunn
- Einstaklingsverkefni.
- Settu upp verklega með brauðbretti og íhlutum.
- Bjargir: [Hliðræn (analgo) gildi í Arduino](https://github.com/VESM2VT/arduino/wiki/Unni%C3%B0-me%C3%B0-hli%C3%B0r%C3%A6n-gildi)


---


### 1. Stýripinni (50%)


Tengdu [stýripinnann](https://lastminuteengineers.com/joystick-interfacing-arduino-processing/) og sett upp þennan [kóða](https://github.com/VESM2VT/Efni/blob/main/Kodi/styripinni.ino), tengileiðbeiningar eru efst í kóðaskjalinu.
Þegar þú hefur áttað þig á hvernig stýripinninn virkar með kóðanum skaltu leysa eftirfarandi verkefni:

1. Settu upp fjórar LED (ásamt viðeigandi viðnámum) á brauðbretti og raðaðu þeim í tígul (áttir). Stýrðu með stýripinnanum  (upp, niður, vinstri, hægri) hvaða LED er kveikt á hverju sinni, það á bara vera kveikt á einni peru í einu.  
1. Stýripinni á X ás á að stýra birtistigi á LED peru, upphafstaðan (miðjan) er með hálft birtustig. Þegar X gildi hækkar (upp) þá eykst birtan, þegar X gildi lækkar (niður)  þá minnkar birtan. Notaðu hnappinn á stýripinnanum til að kveikja og slökkva á LED perunni með [state change](https://github.com/VESM2VT/arduino/wiki/Unni%C3%B0-me%C3%B0-stafr%C3%A6n-gildi#st%C3%B6%C3%B0ubreyting-%C3%A1-takka) kóðalausn.

---

### 2. Kertaljós (50%)

Notaðu [LDR](https://create.arduino.cc/projecthub/tarantula3/using-an-ldr-sensor-with-arduino-807b1c) ljósnema til að stýra birtustigi á [RGB LED](https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/overview). 
1. Þegar það verður minni birta í umhverfinu þá eykst birtan smám saman (fade in) á RGB LED og svo öfugt þegar birtan eykst í umhverfinu þá dofnar RGB LED.
1. Birtan af RGB LED á að líkjast kertaljósi, notaðu **alvöru** [random](https://www.arduino.cc/reference/en/language/functions/random-numbers/random/) til að ná kertaflökkt áhrifum, [sýnidæmi](https://github.com/VESM2VT/Efni/blob/main/Kodi/CandleLight.ino) og nánar um [alvöru random](https://www.programmingelectronics.com/using-random-numbers-with-arduino/).
1. Notað mismunandi litablæbrigði; hvítur, gulur, appelsínugulur úr RGB perunni þannig að það líkist sem mest litbrigðum frá kertaljósi, [sýnidæmi](https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/overview)

![Tengimynd](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/Verkefni_3_2_H21_2.drawio.png)

---


## Námsmat og skil

Yfirferð og námsmat á sér stað í tíma. 
Fyrir hvern lið er gefið heilt fyrir fullnægjandi lausn, hálft ef lausn er ábótavant, ekkert ef lausn er stórlega ábótavant eða vantar.
Skilaðu á Innu kóðalausnum.
