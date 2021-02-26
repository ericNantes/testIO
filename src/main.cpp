#include <Arduino.h>

void sortiesDirectes() {
  u32 time1, time2, time3;
  time1 = micros();

  // 50 transitions pour augmenter la précision de la mesure temporelle
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);

  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);

  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);

  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);

  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);

  time2 = micros();
  time3 = micros();

  Serial.print("Délai pour 1 sortie directe : ");
  Serial.println((time2 - time1 - (time3 - time2))/50.0);
}

void sortiesViaDigitalWrite() {
  u32 time1, time2, time3;
  time1 = micros();

  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);

  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);

  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);

  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);

  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);

  time2 = micros();
  time3 = micros();

  Serial.print("Délai pour 1 digitalWrite : ");
  Serial.println((time2 - time1 - (time3 - time2))/50.0);
}

void setup() {
  Serial.begin(9600);
  delay(100);
  pinMode(8, OUTPUT);
  sortiesDirectes();
  sortiesViaDigitalWrite();
  noInterrupts();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, 0);
  delayMicroseconds(100);
  //digitalWrite(8, 1);
  //delayMicroseconds(100);

  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);
  digitalWrite(8, 0);
  digitalWrite(8, 1);

  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
  bitClear(PORTB, PORTB0);
  bitSet(PORTB, PORTB0);
}