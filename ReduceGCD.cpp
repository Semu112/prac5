#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int x, int y){

    if(x>=y){
        return binaryOperatorHelper(x, y);
    }
    else{
        return binaryOperatorHelper(y, x);
    }
}

int ReduceGCD::binaryOperatorHelper(int smaller, int larger){

    int remainder = larger%smaller;

    if(remainder == 0){
        return smaller;
    }
    else{
        return binaryOperatorHelper(remainder, smaller);
    }

}