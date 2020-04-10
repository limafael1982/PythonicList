#ifndef _NOT_YET_IMPLEMENTED_EXCEPTION_HPP_
#define _NOT_YET_IMPLEMENTED_EXCEPTION_HPP_

#include <exception>

class NotYetImplementedException : public std::exception
{
private:
    
    std::string errorMessage;
    
public:
    NotYetImplementedException(const char * error = "NotYetImplementedException")
    {
        errorMessage = error;
    }
    
    const char * what() const noexcept
    {
        return errorMessage.c_str();
    }
    
};

#endif // _NOT_YET_IMPLEMENTED_EXCEPTION_HPP_