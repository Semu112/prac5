#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> vector){

    if(vector.size() <= 2){ //base case
        return binaryOperator(vector.at(0), vector.at(1)); //Compares final two numbers in vector
    }

    int lastValue = vector.back(); //stores last value in vector
    vector.pop_back(); //Removes last value from vector

    return binaryOperator(lastValue, reduce(vector)); //Calls binaryOperator on last value in vector and the rest of the vector

}