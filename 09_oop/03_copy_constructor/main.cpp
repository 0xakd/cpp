#include "integer.h"
#include <iostream>

using namespace std;

int main(){
    int *p1 = new int(5);
    //Shallow copy
    int *p2 = p1; // only copies the address and changes will be reflected in original also.


    // Deep Copy
    Integer i(5);
    Integer i2(i);
    cout << i.GetValue() << endl;
    cout << i2.GetValue() << endl;
}