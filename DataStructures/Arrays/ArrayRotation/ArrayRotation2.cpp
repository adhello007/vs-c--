#include <iostream>
#include<climits>
using namespace std;
/*this is method 2 of array rotation anticlockwise. Now i woudldnt suggest this method cause personally i dont 
feel this is a good piece of code but yes it is a method. it is shifting the entire array counterclockwise one by one.*/
int main() 
{ 
    int A[7]={1,2,3,4,5,6,7};
    int d,n=0; 
    n=7;
    cin >> d;
    for(int x:A)
    cout << x << "  ";  
    cout << endl;
    while(d--)
    {
        int temp=0;
     temp=A[n-1];
     A[n-1] = A[0];
      A[0]=A[1];

     for(int i=2;i<n-1;i++)
     A[i-1]=A[i];

     A[n-2]=temp;
    }
    
    for(int x:A)
    cout << x << "  ";
}












