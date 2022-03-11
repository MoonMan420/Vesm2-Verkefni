# Tímaverkefni 1 - 5%

## Forritað með Serial Monitor

Bjargir:

- [Skrifað í Serial Monitor](https://github.com/VESM2VT/arduino/wiki/Forritun#skrifa%C3%B0-%C3%AD-serial-monitor)
- [Lesið frá Serial Monitor](https://github.com/VESM2VT/arduino/wiki/Forritun#lesi%C3%B0-inn-fr%C3%A1-serial-monitor)

Munum að alltaf þegar nota á Serial Monitor þarf að setja ```Serial.begin(9600);``` í ```setup``` fallið.

---

### 1.0 Serial Monitor "Hello World!"

Opnaðu Arduino IDE forritið og búðu til nýtt Sketch (File -> New). Það ætti að opnast í nýjum glugga með `setup` og `loop` föllum.

Skrifaðu svo viðeigandi línu í `setup` fallið til að virkja Serial samskiptin.

Skrifaðu svo í `loop` fallið viðeigandi línu þannig að þegar forritið keyrir að þá birtist á Serial Monitor "Hello from Arduino".

**Til umhugsunar**, hvernig breytist úttakið í Serial Monitor eftir því hvort þú notar `print` eða `println`.

---

### 1.1 Hello World endurtekið (aftur og aftur)

Skrifaðu forrit sem skrifar á skjáinn *Hello* fimm sinnum og síðan *World* fimm sinnum og endurtekur sig svo endalaust.

1. Útfærðu forritið með því að nota tvær `for` lykkjur.
2. Útfærðu forritið með því að nota eina `if` setningu, eina `bool` breytu og eina teljarabreytu (`int`).

---

### 1.2 Halló og bless

Aukabjargir: [Skilyrðissetningar](https://github.com/VESM2VT/arduino/wiki/Forritun#skilyr%C3%B0issetningar)

1. Skrifaðu forrit sem les inn einn staf (`char`) frá Serial Monitor. Ef stafurinn er `h` á að skrifa til Serial Monitor **"hallo"** en ef stafurinn er `b` á að skrifa **"bless"**. Notaðu `if` setningar til að leysa þennan lið.
1. Bættu við forritið: Ef einhver annar stafur er sleginn inn á að birtast á Serial Monitor **"skil ekki!!"**. skoða new line tilvik: `if(stafur != '\n')`
1. Endurskrifaðu forritið úr lið 1 og 2 þannig að það noti `swith-case` í stað `if`.


---

### 1.3 Í hástafi

Aukabjargir: [Strengir í Arduino](https://www.arduino.cc/reference/en/language/variables/data-types/stringobject/)

1. Skrifaðu forrit sem les inn textastreng frá Serial Monitor og skilar sama streng aftur til Serial Monitor nema að búið er að setja alla stafina í strengnum í hástafi.
1. Bættu við forritið: Á eftir textanum á að skrifast út hversu margir stafir voru slegnir inn.
      - Skoðaðu muninn á að nota [`readString`](https://www.arduino.cc/reference/en/language/functions/communication/serial/readstring/) og [`readStringUntil`](https://www.arduino.cc/reference/en/language/functions/communication/serial/readstringuntil/).

**Til umhugsunar**, birtist strengurinn aftur og aftur í Serial Monitor? Ef svo er, hvernig getur þú látið hann birtast bara einu sinni. Ef ekki, hvernig getur þú látið hann birtast aftur og aftur.

---

### 1.4 Fjarstýring

Fjarstýringin fyrir fjarstýrða bílinn sem þú gerir á önninni þarf að senda upplýsingar til bílsins um t.d. hraða og beygjur. Þessar upplýsingar þarf að senda til bílsins sem textastreng (e. string) en verða notaðar af bílnum sem heiltölur.

Til að æfa þig að breyta textastreng í heiltölur ætlar þú að skrifa forrit sem tekur inn textastreng frá Serial Monitor sem inniheldur tvær tölur og kommu á milli þeirra til að aðgreina þær t.d. `123,456`. Forritið á svo að taka þessar tvær tölur og skila summu þeirra.

---

## Námsmat

- Yfirferð og námsmat á sér stað í tíma.
- Fyrir hvern lið; Fullt fyrir fullnægjandi lausn/skilning, ekkert ef lausn/skilningur er ábótavant eða vantar.
<!--
#### Eftirfarandi er metið í tíma útfrá verklegum tilraunum og skilningi nemanda:

1. Þekkir helstu tög og stærðir í binary. 
1. Getur skrifað út með Serial Monitor (V1.1).
1. Getur lesið frá Serial Monitor (V1.2). 
1. Kann að vinna með skilyrðissetningar og lykkjur í Arduino. 
1. Notar innbyggð föll;`toUpperCase()` og `toInt()`.
1. Notar bitwise operator.

 
1. Þekkir Arduino hardware parta og pinna.

**TODO:**  

- Fjölga æfingum í skilyrðissetningum og lykkjum inná milli td; case/switch, forlykkjan. hafa hægari þrepanda í erfiðleikastigi.
-->
