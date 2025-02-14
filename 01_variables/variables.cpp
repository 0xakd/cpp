#include <iostream>

int main(){

    using namespace std;
    
    //integer 
    int i;  //uninitialised variable contains garbage values.
    cout << i << endl;

    //float or decimal values
    float f = 342.23f;
    cout << f << endl;

    double d = 321.123;
    cout << d << endl;

    //character 
    char c = 'a';   //single character
    cout << c << endl;

    char str[20] = "I am learning c++";     //multiple character or string.
    cout << str << endl;

    //array
    int arr[5] = {1,2,3,4,5};
    cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;


    return 0;
}