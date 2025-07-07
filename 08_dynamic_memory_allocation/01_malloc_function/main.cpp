#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    /**
     * takes only one argument i.e. size of data-type.
     * returns a void pointer to the allocated memory,
     * that's why it needs to be typecasted at the 
     * time of allocation. 
     */
    int *p = (int *)malloc(sizeof(int)); //allocates memory for 1 integer 
    //int *p = (int *)malloc(5 * sizeof(int)); //allocates memory for 5 integers.

    //checks weather the memory is allocated or not.
    if(p == NULL){
        cout<<"Failed to allocate memory"<<endl;
        return -1;  //ends the program if failed.
    }

    *p = 5;
    cout << "value of p is " << *p << endl;

    /**
     * freeing the allocated memory from heap is 
     * very important. 
     * if not freed, it can cause memory leaks.
     */
    free(p);

    /**
     * after freeing the memory, we need to
     * set the variable to NULL.
     * because even after freeing the memory, 
     * the variable still points to the
     * memory address.
     * 
     * pointer not assigned to NULL after freeing 
     * is called Dangling pointer.
     */
    p = NULL;

    return 0;
} 

 
  
   
    
     
      