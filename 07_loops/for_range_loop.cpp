#include <iostream>

int main(){
    using namespace std;

    int arr[] = {1,2,3,4,5,6};

    for(const auto & x : arr){
        cout << x << " ";
    }

    cout<< "\n";

    for(auto x : "My name is ajay"){
        cout << x << " ";
    }
    
    return 0;
}