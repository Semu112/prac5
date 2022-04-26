#include "MapGeneric.h"
#include "MapTriple.h"

#include <iostream>

int main(void){

    std::vector<int> tripleVector = {1, 2, 3};

    MapTriple mt;

    tripleVector = mt.map(tripleVector);

    std::cout << tripleVector.at(0) << std::endl;
    std::cout << tripleVector.at(1) << std::endl;
    std::cout << tripleVector.at(2) << std::endl;

    return 0;
}