#include "Comparator.h"

#pragma once
class LastNameDescendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return -right.getLastName().compare(left.getLastName());
    }
};