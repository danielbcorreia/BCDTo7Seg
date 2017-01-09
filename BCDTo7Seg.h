#ifndef BCDTo7Seg_H
#define BCDTo7Seg_H

#include "Arduino.h"

class BCDTo7Seg {

public:
    BCDTo7Seg();
    BCDTo7Seg(int b0, int b1, int b2, int b3);
    
    void attach(int b0, int b1, int b2, int b3);
    void write(int val);

private:
    int _b0, _b1, _b2, _b3;	
};

#endif
