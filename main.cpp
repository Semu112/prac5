#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

#include <iostream>

int main(void){

    std::cout << "map" << std::endl;

    std::vector<int> mapVector = {1, -2, -3};

    MapTriple mt;
    MapAbsoluteValue ma;
    MapSquare ms;

    mapVector = ma.map(mapVector); //absolutes
    mapVector = mt.map(mapVector); //triples
    mapVector = ms.map(mapVector); //squares

    std::cout << mapVector.at(0) << std::endl;
    std::cout << mapVector.at(1) << std::endl;
    std::cout << mapVector.at(2) << std::endl;

    std::cout << "filter" << std::endl;

    std::vector<int> filterVector = {-1, 1, 2, 3, 5, 6};

    FilterOdd fo;

    filterVector = fo.filter(filterVector);

    std::cout << filterVector.at(0) << std::endl;
    std::cout << filterVector.at(1) << std::endl;
    std::cout << filterVector.at(2) << std::endl;
    std::cout << filterVector.at(3) << std::endl;

    std::cout << "reduce" << std::endl;

    std::vector<int> reduceVector = {24, 28};

    ReduceMinimum rm;
    ReduceGCD rg;

    std::cout << rm.reduce(reduceVector) << std::endl;
    std::cout << rg.reduce(reduceVector) << std::endl;

    return 0;
}