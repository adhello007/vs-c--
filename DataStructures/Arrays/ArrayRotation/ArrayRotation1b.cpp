#include <iostream>
#include<climits>
using namespace std;
/*this is method 1, clockwise rotation for the array*/
int main() 
{ 
    int A[7]={1,2,3,4,5,6,7};
    int d,n=0; 
    n=7;
    cin >> d;
    int temp[d];

    for(int x:A)
    cout << x << "  ";  

    cout << endl;
    int a=0;
    for(int i=n-d;i<n;i++)
    temp[a++]=A[i];

    for(int i=n-1-d;i>=0;i--)
    A[i+d]=A[i];

    for(int i=0;i<d;i++)
    A[i]=temp[i];

    for(int x:A)
    cout << x << "  ";
}