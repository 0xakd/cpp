#include <iostream>

int main() {
    using namespace std;
    
    int x = 10;
    cout << &x << endl;

    int *ptr = &x;
    cout << *ptr << endl;
}