#include <iostream>

using namespace  std;

// int GetValue(){
//     return 10;  // returns a rvalue, which is a temporary value.
// }

int& GetValue(){
    static int value = 15;  // assigns lvalue to the static variable 
    return value;   //returns lvalue
}

int main(){

    int a = 10; // here a is lvalue and 10 is rvalue
    int b = GetValue(); 
    cout << b << endl;  // 15
    GetValue() = 5;
    int c = GetValue();
    cout << c << endl;  // 5
    cout << b << endl;  // 15
    return 0;
}