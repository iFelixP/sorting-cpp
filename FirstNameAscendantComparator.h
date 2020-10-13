#include "Comparator.h"

#pragma once
class FirstNameAscendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return -left.getFirstName().compare(right.getFirstName());
    }
};
