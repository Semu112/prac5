#include "MapGeneric.h"

std::vector<int> MapGeneric::map(std::vector<int> vector){

    if(vector.size() <= 1){ //Base case
        vector.at(0) = this->f(vector.at(0)); //maps value in vector
        return vector;
    }

    std::vector<int> newVec = vector; //Copies vector

    int mappedValue = this->f(vector.back()); //stores the map of last value in vector in mappedValue
    vector.pop_back(); //Removes last value of vector from vector

    vector = map(vector); //Recursively call map function

    vector.push_back(mappedValue); //Adds mapped value to end of vector (I think it only runs after finishing recursion)

    return vector;
}