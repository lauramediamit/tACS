#include <DigiPotX9Cxxx.h>

DigiPot pot(8, 9, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Starting");

pot.set(100);
Serial.println(analogRead(A0));

//  for (int i=0; i<100; i++) {
//    pot.increase(1);
//    Serial.println(analogRead(A0));
//    delay(20);
//  }
//
//  for (int i=0; i<100; i++) {
//    pot.decrease(1);
//    Serial.println(analogRead(A0));
//    delay(20);
//  }

}
