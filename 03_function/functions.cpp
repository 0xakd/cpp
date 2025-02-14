#include <iostream>

//function declaration
int square(int a);

int add_num(int x, int y){
    return x+y;
}

int main (){
    int a,b;
    
    std::cout << "Enter two numbers:";
    std::cin >> a >>b;

    int res = add_num(a,b);
    std::cout << "Sum of " << a << " and "<< b << " is " << res << std::endl;
    
    res = square(a);
    std::cout << "Square of " << a << " is " << res << std::endl;

    return 0;
}



int square(int a){
    return a*a;
}