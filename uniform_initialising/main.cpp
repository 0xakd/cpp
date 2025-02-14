#include <iostream>
#include <string>

int main(){
    int a1;     //uninitialised variable
    std::cout << a1 <<std::endl;

    int a2 = 0;     //Copied initialisation
    std::cout << a2 <<std::endl;

    int a3(3);      //Direct initialisation
    std::cout << a3 <<std::endl;



    std::string s1;
    std::cout << s1 <<std::endl;
    
    std::string s2("C++");
    std::cout << s2 <<std::endl;



    char d1[8];     //Uninitialised
    std::cout << d1 <<std::endl;
    char d2[8] = {"\0"};
    std::cout << d2 <<std::endl;

    char d3[8] = {'a', 'b', 'c', 'd'};
    std::cout << d3 <<std::endl;

    char d4[8] = {"qwerty"};
    std::cout << d4 <<std::endl;



    int b1{};
    std::cout << b1 <<std::endl;

    int b3{5};
    std::cout << b3 <<std::endl;

    int b4 = 0;
    std::cout << b4 <<std::endl;



    char *p1 = new char[8]{};
    std::cout << p1 <<std::endl;

    char *p2 = new char[8]{"Hello"};
    std::cout << p1 <<std::endl;

    float f{};
    std::cout << f <<std::endl;

    int i{f};
    std::cout << i <<std::endl;


}




/**
 * Value initialisation -> T obj{} ;
 * Direct initialisation -> T obj{v} ;
 * Copy initialisation -> T obg = v ;
 */