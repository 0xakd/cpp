#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    /**
     * takes two arguments :- 
           (i)quantity of memory needed 
           (ii) size of data-type .
     * like malloc, calloc also returns a void pointer to the allocated memory,
        that's why it needs to be typecasted at the 
        time of allocation. 
      
     * At the time of memory allocation,
        calloc initialises all the memory to 0,
     */
    int *p = (int *)calloc(5, sizeof(int)); //allocates memory for 5 integer 

    //checks weather the memory is allocated or not.
    if(p == NULL){
        cout<<"Failed to allocate memory"<<endl;
        return -1;  //ends the program if failed.
    }

    *p = 5;
    cout << "value of p is " << *p << endl;

    /**
     * freeing the allocated memory from heap is 
         very important. 
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

 
  
   
    
     
      