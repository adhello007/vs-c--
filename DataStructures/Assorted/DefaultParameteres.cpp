#include <iostream>
using namespace std;

//basically when we dont input a certain parameter, then 
//we can tell the program to use default values and use them 
//to run the code.

int volume(int l=1,int w=1, int h=1);//this means that
//if ive not given the value of any of the parameter
//then the code will use the default value of 1 to 
//run the program.
int main()
{
    cout << volume();
}
int volume(int l,int w, int h){
    return l*w*h;
}