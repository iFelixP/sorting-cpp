#pragma once

#include "Comparator.h"

class ClaveDescendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return right.getClave() - left.getClave();
    }
};
