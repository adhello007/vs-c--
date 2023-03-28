#include <iostream>
#include <string>
#include <sstream>//string stream included
using namespace std; 
//converting a string to an int using stringstream classs
int main()
{
    string s="12234";
    stringstream word(s);//we have an object word(you can name your object anything)
    //which is an object of the stringstream class and it holds the value of 12234.

    //this now streams it to the variable x which holds the value of the string as 
    //an integer.

    int x;
    word >> x;
    cout << x;
    
}