#pragma once

#include "Comparator.h"

class DateMonthAscendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return left.getBirthdayMonth() - right.getBirthdayMonth();
    }
};