# Tímaverkefni 2
- 10% af heildareinkunn.
- Einstaklingsverkefni.
- Settu upp verklega með brauðbretti og íhlutum.

---

#### 2.1 - Teljari (20%)

Kynntu þér hvernig 7-Segment virkar með því að lesa [þessa grein](https://lastminuteengineers.com/seven-segment-arduino-tutorial/).
Til umhugsunar: Hvort er þitt 7-Segment Display *common anode* eða *common cathode*? Hver er munurinn á þessu tvennu?

1. Í greininni er sýnd útfærsla á teljara. Settu teljarann upp á brauðbretti og settu kóðann á Arduino tölvuna þína **en farðu eftir [þessari mynd](https://raw.githubusercontent.com/VESM2VT/Efni/main/Myndir/SevenSeg_1_vidnam.png) til að tengja 7-Segment-ið**, notar bara eitt 1KΩ viðnám í stað átta 220Ω viðnáma. Notaðu útgáfu **3.5.0** af [SevSeg](https://www.arduino.cc/reference/en/libraries/sevseg/) safninu.
1. Þú veist að ```loop``` fallið er lykkja en í kóðadæminu er eina sem er í fallinu ```for``` lykkja. Breyttu útfærslunni á fallinu þannig að það þurfi ekki að nota "auka" lykkju.

---

#### 2.2 - Teningur (30%)
1. Útfærðu teninginn (Rolling Dice) sem er neðst í [greininni](https://lastminuteengineers.com/seven-segment-arduino-tutorial/) en breyttu útfærslunni þannig að þú þurfir ekki "pulldown" viðnámið heldur sé það leyst í kóða með innbyggða "pullup" viðnámi. 
1. Dragðu úr "bounce" takkaáhrifum með kóðaútfærslu á takkastöðubreytingum.

---

#### 2.3 - 7-Segment fjórir tölustafir (10%)

Kynntu þér hvernig 7-Segment með fjórum tölustöfum virkar með því að lesa seinni hluta [þessarar greinar](https://www.circuitbasics.com/arduino-7-segment-display-tutorial/) (kaflinn *4 DIGIT 7-SEGMENT DISPLAYS*) og horfa á þetta stutt myndband [How 4 Digit 7 Segment Displays Work](https://youtu.be/fYAlE1u5rno)
Skoðaðu einnig stillingar og aðgerðir í [SevSeg safninu](https://github.com/DeanIsMe/SevSeg). 

1. Settu upp fyrri rásina (sem birtir 4.999). Það á ekki á að setja upp seinni rásina (DISPLAYING SENSOR DATA).

---

#### 2.4 - BOBA (40%)

1. Skrifaðu forrit fyrir niðurteljara sem virkar með 4 stafa 7-Segment-inu. Niðurteljarinn á að byrja á 60 sekúndum og telja niður í núll. 
1. Þegar komið er í núll þá á að heyrast í buzzer. 
1. Til að stöðva teljara þarf að klippa ákveðinn lit af vír, var það rauði eða kannski blái vírinn?
1. Ef klippt er á rangan vír þá verður niðutalningin tvöfalt hraðari. 

---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma. 
- Fyrir hvern lið; gefið er heilt fyrir fullnægjandi lausn, hálft ef lausn er ábótavant, ekkert ef lausn er stórlega ábótavant eða vantar. 
- Skilaðu á Innu öllum kóðalausnum.
