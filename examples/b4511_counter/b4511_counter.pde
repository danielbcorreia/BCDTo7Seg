#include "BCDTo7Seg.h"

BCDTo7Seg dsp;

void setup() {
  dsp.attach(2,3,4,5); // pins
}

void loop() {
  for (int i = 0; i < 10; i++) {
    dsp.write(i);
    delay(1000);
  }
}