#include <iostream>

int main() {
    using namespace std;
    
    int x = 10, y = 30;
    cout << &x << endl;

    int *ptr = &x;		

    cout << *ptr << endl;   //prints the value of x
    cout << ptr << endl;    //prints the address of x

    *ptr = 100;     //changing the value of x through pointers
    cout << x << endl;
    

}