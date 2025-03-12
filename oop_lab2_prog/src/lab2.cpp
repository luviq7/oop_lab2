#include "lab2.h"
#include <assert.h>
#include "limits.h"

unsigned int ShiftLeft(unsigned int uiNumber, unsigned int uiBits) {
    assert(uiNumber <= UINT_MAX);
    uiBits %= 32;  
    return (uiNumber << uiBits) | (uiNumber >> (32 - uiBits));  
}
