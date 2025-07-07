#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    //allocating memory for array of 5 integer elements.
    // int *arr = new int[5];

    //initialising each member of out array
    // for(int i = 0; i < 5; i++){
    //     arr[i] = i+1;
    // }

    //initialisation can also be done like this.
    int *arr = new int[5]{5, 4, 3, 2, 1};

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<endl;
    }


    delete []arr;
    arr = nullptr;
}