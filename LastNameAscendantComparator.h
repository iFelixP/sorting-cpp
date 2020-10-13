#include "Comparator.h"

#pragma once
class LastNameAscendantComparator: public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return -left.getLastName().compare(right.getLastName());
    }
};

