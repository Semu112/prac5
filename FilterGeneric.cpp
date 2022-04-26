#include "FilterGeneric.h"

#include <iostream>

std::vector<int> FilterGeneric::filter(std::vector<int> vector){

    if(vector.size() <= 0){ //Base case

        return vector;

    }

    if(this->g(vector.back())){ //If it is odd

        int filteredValue = vector.back(); //Store value in a variable
        vector.pop_back(); //Removes last value of vector
        vector = filter(vector); //Recursively calls vector
        vector.push_back(filteredValue); //Adds filtered value to vector after recursive calls have finished

    }
    else{
        
        vector.pop_back(); //Removes last value of vector
        vector = filter(vector); //Recursively calls vector

    }

    return vector;

}