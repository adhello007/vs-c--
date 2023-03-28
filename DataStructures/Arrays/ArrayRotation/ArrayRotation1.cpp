#include <iostream>
#include<climits>
using namespace std;
/*Array Rotation method 1,counterclockwise, where we save the d elements in temp array and then shift everything to counterclockwise position*/
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
    for(int i=0;i<d;i++)
        temp[i]=A[i];
    

    for(int i=d;i<n;i++)
    {
        A[i-d]=A[i];
    }
    int a=0;
    for(int i=n-d;i<n;i++)
    {
        A[i]=temp[a++];     
    }

    for(int x:A)
    cout << x << "  ";
}












