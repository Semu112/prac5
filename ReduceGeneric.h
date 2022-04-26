#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>

class ReduceGeneric {

    public:
        int reduce(std::vector<int> vector);

    private:
        virtual int binaryOperator(int x, int y) = 0;

};

#endif