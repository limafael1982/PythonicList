#include <iostream>
#include <string>
#include "PythonicList.hpp"

/**
* this main file is written just for "trying out" purposes.
*/
int main(int argc, char ** argv)
{
	std::cout << "This is example of the pythonic list lib" << std::endl;
        
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(11);
        vec.push_back(40);
        
        auto pyList = new PythonicList(vec);
        pyList->print();
        delete pyList;
        
}
