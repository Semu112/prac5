#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "MapSquare.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

#include <iostream>

int main(void){

    std::vector<int> L;

    std::string input;

    std::getline(std::cin, input);

    input = input + ","; //Appends a comma because below in the code every number in the vector is found be whether it is followed by a comma or not

    std::vector<int> commas; //Vector that stores all the locations of the commas
    for(int i = 0; i<input.size(); i++){
        if(input[i] == ','){
            commas.push_back(i);
        }
    }

    std::string subStr;
    int subStrStart = 0;
    for(int i = 0; i<commas.size(); i++){
        
        subStr = input.substr(subStrStart, commas.at(i));
        L.push_back(stoi(subStr));

        subStrStart = commas.at(i) + 1;
    }

    MapAbsoluteValue ma;
    MapTriple mt;

    L = ma.map(L); //Absolutes
    L = mt.map(L); //Triples

    FilterForTwoDigitPositive fp;
    FilterOdd fo;

    L = fp.filter(L);
    L = fo.filter(L);

    ReduceMinimum rm;
    ReduceGCD rg;

    std::cout << rm.reduce(L) << " " << rg.reduce(L) << std::endl;

    return 0;
}