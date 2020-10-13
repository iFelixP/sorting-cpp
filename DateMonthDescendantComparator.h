#pragma once

#include "Comparator.h"

class DateMonthDescendantComparator : public Comparator<Alumno>
{
public:
    int compare(Alumno& left, Alumno& right)
    {
        return right.getBirthdayMonth() - left.getBirthdayMonth();
    }
};
