#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H

#include <vector>

class FilterGeneric{

    public:

        std::vector<int> filter(std::vector<int> vector);

    private:

        virtual bool g(int x) = 0;
};

#endif