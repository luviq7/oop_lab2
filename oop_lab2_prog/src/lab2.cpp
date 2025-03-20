#include "lab2.h"
#include <assert.h>
#include "limits.h"

unsigned int ShiftLeft(unsigned int uiNumber, unsigned int uiBits) {
    assert(uiNumber < UINT_MAX);
        if (uiNumber >= UINT_MAX){
            return 0;
    }

    uiBits %= 32;  
    return (uiNumber << uiBits) | (uiNumber >> (32 - uiBits));  
}
