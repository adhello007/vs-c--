#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cin >> n; 
    int A[n];

    for(int& x:A)
    cin >> x; 

    for(int i=0;i<n-1;i++)    
    {                         
        int min=i; 
        for(int j=i+1;j<n;j++)
        {   
            if(A[min]>A[j]) 
            {
                min = j; 
            }
        }
        swap(A[min],A[i]);
    }//now sorted no bt
}