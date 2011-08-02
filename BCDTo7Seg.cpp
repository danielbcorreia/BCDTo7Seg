#include "BCDTo7Seg.h"

BCDTo7Seg::BCDTo7Seg(){}

BCDTo7Seg::BCDTo7Seg(int b0, int b1, int b2, int b3) {
  attach(b0, b1, b2, b3);
}

void BCDTo7Seg::attach(int b0, int b1, int b2, int b3) {
  _b0 = b0;
  _b1 = b1;
  _b2 = b2;
  _b3 = b3;
    
  pinMode(b0, OUTPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  
  // initialize to zero
  digitalWrite(b0, LOW);
  digitalWrite(b1, LOW);
  digitalWrite(b2, LOW);
  digitalWrite(b3, LOW);
}

// although this code supports all symbols from 0x0 to 0xF, the 4511 doesn't.
void BCDTo7Seg::write(int val) {  
  digitalWrite(_b0, (val&0x1)!=0);
  digitalWrite(_b1, (val&0x2)!=0);
  digitalWrite(_b2, (val&0x4)!=0);
  digitalWrite(_b3, (val&0x8)!=0);
}