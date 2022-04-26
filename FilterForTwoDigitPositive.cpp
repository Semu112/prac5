#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x){
    if((x>9) && (x<100)){
        return true;
    }
    else{
        return false;
    }
}