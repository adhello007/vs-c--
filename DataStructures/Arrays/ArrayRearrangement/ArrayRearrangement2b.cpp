#include <iostream>
using namespace std;

/*
METHOD 2 
Rearrange the array with positive and negative ints WITH CHANGING REARRANGEMENT and used the idea of quick sort to solve the method.
*/

int main()
{
    
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int A[n];
    cout << "enter array elements" << endl;
    for(int& x:A)
    cin >> x;
    //we have the array
   
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        swap(A[i],A[p++]);
    }//seperated positive and negative numbers with negatives first. 
    
    //p value doesnt change 
   
    for(int i=0;i<n;i+=2)
    {
        if(p>n-1)
        break;
        swap(A[i],A[p++]);
    }
    
        
    for(int x:A)
    cout << x << " ";



}
