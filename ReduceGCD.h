#ifndef REDUCEGCD_H
#define REDUCEGCD_H

#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric{

    private:
        virtual int binaryOperator(int x, int y);
        int binaryOperatorHelper(int smaller, int larger);
};

#endif