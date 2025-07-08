#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    //allocated memory for 2 arrays of 3 integers each [row and column]
    int *row = new int[3];
    int *column = new int[3];


    int **arr = new int *[2];   //allocating memory for 2 int pointers.

    //assigning the 1st and 2nd row.
    arr[0] = row;
    arr[1] = column;


    //initialising the members of out 2D array.
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = i+j;       
        }
    }


    //displaying the array.
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<< "  ";
        }
        cout<<endl;
    }

    delete []row;
    delete []column;
    delete []arr;

}