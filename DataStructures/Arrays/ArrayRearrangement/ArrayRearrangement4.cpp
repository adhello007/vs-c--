#include <iostream>
using namespace std;

/*
    rearrange numbers such that 0 digits come in the end of the array. Only whole numbers
   IMPORTANT CONCEPT FOR ARRAY REARRANGEMENT. 
   line : 22
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
   int count=0;
   for(int i=0;i<n;i++)
    {
        if(A[i]>0)
        swap(A[count++],A[i]);
    }
   

    
    

    for(int x:A)
    cout << x << " "; 


}
