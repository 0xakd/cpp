#include "integer.h"
#include <iostream>

using namespace std;

Integer::Integer(){
    cout<< "Integer()" << endl;
    m_pInt = new int(0);
}

Integer::Integer(int value){
    cout << "Integer(int)" << endl;
    m_pInt = new int(value);
}

Integer::Integer(const Integer &obj){
    cout << "Integer(const Integer &)" << endl;
    m_pInt = new int(*obj.m_pInt);
}



int Integer::GetValue() const{
    return *m_pInt;    
}

void Integer::SetValue(int value){
    *m_pInt = value;
}

Integer::Integer(Integer && obj){
    cout << "Integer(Integer &&)" << endl;
    m_pInt = obj.m_pInt;
    obj.m_pInt = nullptr;
}

Integer::~Integer()
{
    cout<< "~Integer()" << endl;
    delete m_pInt;
}

