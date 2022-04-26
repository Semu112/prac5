#ifndef FILTERODD_H
#define FILTERODD_H

#include "FilterGeneric.h"

#include <vector>

class FilterOdd : public FilterGeneric{

    private:

        virtual bool g(int x);
};

#endif