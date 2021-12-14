# Arduino 

## Arduino Vélbúnaður

1. [What is Arduino and can I use it for my project? (myndband)](https://www.youtube.com/watch?v=CSx6k-zXlLE&list=PLYutciIGBqC2FdMRLZIbPJ-pr7_0KByDN&index=2)
1. [Pin layout; digital, TX/RX, analog, Vc, GND, reset (myndband)](https://www.youtube.com/watch?v=09zfRaLEasY)
1. [Arduino Uno Specs](https://store.arduino.cc/products/arduino-uno-rev3?selectedStore=eu)
1. [The Parts of an Arduino](https://learn.adafruit.com/ladyadas-learn-arduino-lesson-number-0/take-a-tour#the-parts-of-an-arduino-1850093-4)
1. [3 leiðir til að knýja ARDUINO (myndband)](https://www.programmingelectronics.com/power-arduino/)

![Arduino Hardware](https://github.com/VESM2VT/Efni/blob/main/Myndir/Arduino-Uno-basic-connectivity-layout.png)

<!--
Búa til töflu Arduino Uno Technical Specifications
- straumur, vin etc https://components101.com/microcontrollers/arduino-uno
- Don't connect anything to Digital 0 or 1 unless you are super sure because it will affect your Arduino's ability to communicate!
- ekki nota 5V til að knýja Arduino
- the max current you can pull continously is approximately. 1.5 Watt / (Input Voltage - 1 V - 5 V) = in Amps. So for 9V, the max for continuous current is 1.5/(9-1-5) = 0.5 Amps
- I/O pins 20mA each (40mA max)
- 5V pin output, 500mA (800mA max)
- 3.3V 40 mA max
-->

---

## Arduino IDE hugbúnaður

  - [Grunnhugbúnaður](#grunnhugbúnaður)
  - [Auka forritasöfn](#auka-forritasöfn)

### Grunnhugbúnaður

Til að setja kóða á Arduino tölvuna þarf að nota forrit sem þú getur sótt á [Arduiono.cc](https://www.arduino.cc) vefsíðuna.

Farðu inn á þá síðu og veldu Software -> Downloads:

![Arduino Download](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/arduino_download_1.png)

Þegar þú ert komin(n) á Downloads síðuna veldu þá viðeigandi pakka (flestir ættu að velja þennan efsta):

![Val á pakka](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/arduino_download_2.png)

Á síðunni sem opnast þá þarf að smella á *Just Download*:
![Just downaload](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/arduino_download_3.png)

Arduino umhverfið er svo sett upp eins og hvert annað forrit og er óhætt að nota allar sjálfgefnar stillingarnar.

Ræstu nú Arduino forritið og tengdu Arduino tölvuna þína með USB snúrunni við tölvuna.

Þú þarft svo að segja Arudino forritinu í hvaða USB porti Arduino tölvan er tengd. Það gerir þú með því að smella á Tools -> Port og veldu svo það port sem við stendur (Arduino Uno):

![Velja port](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/arduino_com_port.png)

### Auka forritasöfn

Stundum þarf að setja inn auka forritasöfn (e. library). Hér er dæmi um hvernig *ToneLibrary* safnið er sett inn.

Til að setja það inn ferðu í Tools -> Manage Libraries...:

![Library](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/arduino_library_1.png)

Þá opnast Library Manager glugginn og þá slærðu inn *tonelibrary* í leitarsvæðið og smellir svo á Install hnappinn:

![Library install](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/arduino_library_2.png)

### Gagnlegar síður

* [Getting Started with Arduino products](https://www.arduino.cc/en/Guide)
* [Arduino Foundations](https://www.arduino.cc/en/Tutorial/Foundations)



