#pragma once

#include "Comparator.h"

class ClaveAscendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left,Alumno& right)
    {
        return left.getClave() - right.getClave();
    }
};

