#ifndef _PYTHONIC_LIST_HPP_
#define _PYTHONIC_LIST_HPP_

#include <vector>
#include <stdexcept>
#include <exception>
#include <iostream>
#include "NotYetImplementedException.hpp"

class PythonicList
{
private:
    std::vector<int> pList;
    
public:
    PythonicList();
    PythonicList(std::vector <int> list);
    ~PythonicList();
    std::vector<int> handle(int firstIndex, int secondIndex);
    void print();
};

#endif // _PYTHONIC_LIST_HPP_