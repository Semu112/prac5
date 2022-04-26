#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H

#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric{

    private:
        virtual int binaryOperator(int x, int y);
};

#endif