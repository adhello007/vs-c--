#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

//how to input numbers and store it in an array without knowing its size before hand. 
int main() 
{
    int g,n;
    int A[100];
    int i=0;
    do
    {
        cout << "input a number or -1 to quit" << endl;
        cin >>n;
        if(n==-1)
        break;
        A[i++]=n;
    }
    while(n!=-1);

    for(int j=0;j<i;j++)
    {
        cout << A[j] << endl;
    }
}


