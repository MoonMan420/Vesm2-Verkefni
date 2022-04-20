# Verkefni 7 

- 10% af heildareinkunn
- Einstaklingsverkefni.
- Settu upp verklega með brauðbretti og íhlutum.
- Bjargir: [DroneBot - Collision Avoidance](https://dronebotworkshop.com/elegoo-robot-car-part-3/#Collision_Avoidance_Sketch)

---

### 1 Servo (40%)

1. Festu Sonic Sensor-inn á bláa micro [servo mótor](https://lastminuteengineers.com/servo-motor-arduino-tutorial/) og bílinn. 
1. Notaðu kóða til að láta Ultrasonic snúa fram í upphafsstöðu.
1. Bíllinn á að gera það sama og í verkefni 6.1 nema núna í stað þess að bíllinn snúi sér, þá á servo mótorinn að snúa Sonic Sensor-num.
    - Servo-inn snýr Ultrasonic-inum í 0° kveikir á mælingu og ef fjarlægð í hindrun er meiri en 100cm snýr bíllinn sér til vinstri og keyrir áfram (snýr servo í 90°).
    - Ef mælingin í 0° er minni en 100cm snýr servo-inn í 180° og aftur er mælt, ef fjarlægð er minna en 100cm snýr bíllinn sér til hægri og keyrir áfram (snýr servo í 90°).
    - Annars snýr bíllinn í 180° og keyrir áfram (snýr servo í 90°).

---

### 2 Árekstrarvörn II (60%)

1. Bíllinn á að keyra áfram þar til að Sonic Sensor-inn skynjar hindrun sem er nær bílnum en 50 cm. Þá á bíllinn að stoppa. 
1. Servo mótorinn snýr Sonic Sensor-num til vinstri 90 gráður og Ultrasonic skynjarinn tekur fjarlægðamælingu
1. Bíllinn snýr servo 180 gráður til hægri og Utrasonic skynjarinn tekur aðra mælingu. 
1. Fjarlægðamlingar eru bornar saman og önnur er valin ef hindrun er fjær en 100 cm.
1. Bíllinn snýr sér að þeirri átt þar sem fjarlægðin er meiri í hindrun, þ.e. ef hún er meiri en 100 cm.
1. Ef bíllinn hefur enga góða átt til að keyra (minna en 100 cm í hindrun), þá beygir hann í 180° (snýr við) og heldur áfram för sinni.

---

## Námsmat og skil
- Yfirferð og námsmat á sér stað í tíma. 
- Fyrir hvern lið; gefið er heilt fyrir fullnægjandi lausn, hálft ef lausn er ábótavant, ekkert ef lausn er stórlega ábótavant eða vantar. 
- Skilaðu á Innu öllum kóðalausnum.
