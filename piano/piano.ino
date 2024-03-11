#define pinoBuzzer 2
#define pinoDo 3
#define pinoRe 4
#define pinoMi 5
#define pinoFa 6
#define pinoSo 7
#define pinoLa 8
#define pinoSi 9
#define pinoDO 10

byte doh, re, mi, fa, so, la, si, dohh = 0;



void setup() {
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoDo, INPUT);
  pinMode(pinoRe, INPUT);
  pinMode(pinoMi, INPUT);
  pinMode(pinoFa, INPUT);
  pinMode(pinoSo, INPUT);
  pinMode(pinoLa, INPUT);
  pinMode(pinoSi, INPUT);
  pinMode(pinoDO, INPUT);

  Serial.begin(9600);
  delay(500);
}


void loop() {
  doh = digitalRead(pinoDo);
  re = digitalRead(pinoRe);
  mi = digitalRead(pinoMi);
  fa = digitalRead(pinoFa);
  so = digitalRead(pinoSo);
  la = digitalRead(pinoLa);
  si = digitalRead(pinoSi);
  dohh = digitalRead(pinoDO);

  if (doh == 1) {
    tone(pinoBuzzer, 523);
  } else if (re == 1) {
    tone(pinoBuzzer, 587);
  } else if (mi == 1) {
    tone(pinoBuzzer, 659);
  } else if (fa == 1) {
    tone(pinoBuzzer, 698);
  } else if (so == 1) {
    tone(pinoBuzzer, 783);
  } else if (la == 1) {
    tone(pinoBuzzer, 880);
  } else if (si == 1) {
    tone(pinoBuzzer, 987);
  } else if (dohh == 1) {
    tone(pinoBuzzer, 999);
  } else {

    noTone(pinoBuzzer);
  }
  delay(50);
}
