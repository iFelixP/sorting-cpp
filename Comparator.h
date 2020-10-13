#pragma once

template <class T>
class Comparator
{
public:
    virtual int compare(T &,T &) = 0;
};