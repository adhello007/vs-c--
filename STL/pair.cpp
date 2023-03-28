#include <iostream>
using namespace std; 
#include <cstdlib>
int main()
{

    pair<int,string> p; 
    p={3,"hello"};
    //p=make_pair(2,"abc");//another way to initialize a pair. 
    //cout << p.first << " " << p.second; 

    //Copying by Value: 

    // pair<int,string> p1; 
    // p1=p;//this is sending a copy of p; 
    // p1.first=8; 

    // cout << p1.first << " " << p.first;

    //Copying by Reference: 

    // pair<int,string> &p1 = p;
    // p1.first = 8;
    // cout << p1.first << " "<<p.first; 


}