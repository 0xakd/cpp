#include "integer.h"
#include <iostream>

using namespace std;

class Number {
    Integer m_Value;
public:
    Number(int value):m_Value{value}{   // initialise m_Value with value
    }

    // copy constructor
    Number(const Number &n):m_Value{n.m_Value}{     // copies value of n's m_Value to new object's m_Value 
    }

    // Destructor
    ~Number(){ 
    }

    // move constructor
    Number (Number &&n):m_Value{move(n.m_Value)}{
    }

    
    // Defualt Specifier 
    Number (Number &&n) = default;      // move constructor
    Number (const Number &n) = default;     // copy constructor
    Number & operator = (Number &&) = default;      // move assignment
    Number & operator = (const Number &) = default;     // copy assignment


};


Number CreateNumber(int num){
    Number n{num};
    return n;
}

int main(int argc, char const *argv[])
{  
    Number n1{1};
    auto n2{n1};
    n2 = n1;

    auto n3{CreateNumber(3)};
    n3 = CreateNumber(3);
    return 0;
}
