#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
    char *p = new char[4];  //always allocate 1 extra byte of memory for string.
    strcpy(p, "C++");

    cout<<"the string was: "<< p <<endl;

    delete []p;
    p = nullptr;

    return 0;
}