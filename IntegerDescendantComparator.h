#pragma once

#include "Comparator.h"

class IntegerDescendantComparator : public Comparator<int>
{
public:
    int compare(int& left, int& right)
    {
        return left - right;
    }
};
