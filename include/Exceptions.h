//
// Created by brianton on 4/26/20.
//

#ifndef CAS_EXCEPTIONS_H
#define CAS_EXCEPTIONS_H

#include <stdexcept>

class NotImplementedException : public std::logic_error
{
public:
    NotImplementedException() : std::logic_error("Function Not Implemented"){}
};

#endif //CAS_EXCEPTIONS_H
