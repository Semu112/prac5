#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x){
    if((x>0) && (x<100)){
        return true;
    }
    else{
        return false;
    }
}