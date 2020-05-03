#include "PythonicList.hpp"

PythonicList::PythonicList()
{
    std::cout << "new list created" << std::endl;
}

PythonicList::PythonicList(std::vector<int> list)
{
    for (auto value : list)
    {
        this->pList.push_back(value);
    }
}

PythonicList::~PythonicList()
{
    std::cout << "pythonic list being destroyed" << std::endl;
    this->pList.clear();
}


/**
 * 
 * @function handle
 * @description This method returns a new vector 
 *              based on the indexes specified on the parameteres.
 *              The behavior is something like python lists
 *              For now, negative indexes are not implemented, but it will in the
 *              the near future.
 * @params firstIndex : beginning of the slice
 *         secondIndex: finish of the slice
 * @return std:vector<int> 
 * @exception std::out_of_range
 * 
 * 
 */
std::vector<int> PythonicList::handle(int firstIndex, int secondIndex)
{
    int arrSize = 0;
    std::vector<int> ans;
    
    try
    {
        if ((firstIndex < 0) || (secondIndex < 0))
        {
            throw NotYetImplementedException();
        }
        
        if (secondIndex < firstIndex)
        {
            throw std::out_of_range("Second index is smaller than the firstIndex");
        }
    
        arrSize = ans.size();
        if (arrSize == 0)
        {
            std::cout << "The current vector is empty. Returning same vector" <<
            std::endl;
            return this->pList;
        }
        else
        {
            for (auto index = firstIndex; index <= secondIndex; index++)
            {
                ans.push_back(this->pList.at(index));
            }
            
        }
        
    }
    catch (const std::out_of_range & out_of_range_excp)
    {
        std::cerr << "Index out of bounds exception " <<
        out_of_range_excp.what() << std::endl;
        
    }
    catch (const NotYetImplementedException & notYet)
    {
        std::cerr << "Not yet implemented! " <<
        notYet.what() << std::endl;
        
    }
    
    return ans;
}

/**
 * @function print()
 * @description print the contents of the list
 * @params none
 * @return none
 * @exception none
 * 
 */
void PythonicList::print()
{
    int index;
    for (index = 0; index < this->pList.size(); index++)
    {
        std::cout << "[" << index << "] => " << this->pList[index]
            << std::endl;
    }
}