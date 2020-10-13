#include <iostream>
#include "Comparator.h"

using namespace std;
class StringAscendantComparator : public Comparator<string>
{
public:
    int compare(string& left, string& right)
    {
        return -left.compare(right);
    }
};