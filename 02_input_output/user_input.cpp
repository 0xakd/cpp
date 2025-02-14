#include <iostream>

int main (){
    using namespace std;


    //integer input
    int var1;
    cout << "What's your age ??" << endl;
    cin >> var1;
    cout << "Your age is =>" << var1 << endl;

    // character/string input
    char buff[512];
    cout << "What's your name ??\n->";
    cin >> buff;    //only takes a single character or a word as input
    cout << buff << endl;


    cin.getline(buff, 512, '\n');    //takes input until user hits enter. [or it gets newline character]
    cout << "Your name is: " <<buff << endl;


    return 0;
}