#include <iostream>

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


using namespace std;

int main(){
    int x, y;
    
    cout << "Enter a No.\n: ";
    cin >> x;
    cout << "Enter another No.\n: ";
    cin >> y;

    cout << "Before Swapping:\nvalue of x: " << x << "\nvalue of y: " << y << endl;

    swap(x, y);
    cout << "After Swapping:\nvalue of x: " << x << "\nvalue of y: " << y << endl;
}