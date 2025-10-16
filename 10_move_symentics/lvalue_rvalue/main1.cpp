#include <iostream>
using namespace std;

// can take both the lvalue and the rvalues.
void PrintNames( const string& name){
    cout<< "[lvalue]" <<name << endl;
}


// can only take the rvalues not the lvalues.
void PrintNames( const string&& name){
    cout << "[rvalue]" << name << endl;
}

int main(){ 
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName +  lastName;

    PrintNames(fullName);
    PrintNames( firstName +  lastName + '1');     // cant run without the & symbol in the function parameter
}