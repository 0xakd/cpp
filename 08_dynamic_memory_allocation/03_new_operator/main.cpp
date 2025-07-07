#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){


    /**
     * with the new operator we can
     * easily allocate memory from the heap. 
     */
    int *p = new int;   //initialising pointer variable with address of allocated memory by new operator.
    *p = 5;
    cout<<"The value of p is: "<< *p << endl;
    

    /**
     * unlike malloc or calloc, new operator 
     * can also initialise the memory with value.
     */
    int *q = new int(10);
    cout << "The value of q is: "<< *q << endl;


    //deleting the allocated memory.
    delete(p);
    delete(q);

    //setting the deleted pointers to null to avoid dangling pointer risks.
    p = nullptr;
    q = nullptr;

    return 0;
}