#include <iostream>

int main(){
    using namespace std;

    //referent
    int x = 10;

    //reference
    int &ref = x;

    cout << "Value of x is: " << x << endl;
    cout << "Reference is: " << ref << endl;
 
    //changing the value of x.
    x = 25;
    cout << "Value of x after changing value of x is: " << x << endl;
    cout << "Reference after changing value of x is: " << ref << endl;
 
    //changing the value of reference
    ref = 55;
    cout << "Value of x after changing value of ref is: " << x << endl;
    cout << "Reference after changing value of ref is: " << ref << endl;

    return 0;
}