#pragma once

#include "Comparator.h"

class FirstNameDescendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return -right.getFirstName().compare(left.getFirstName());
    }
};
