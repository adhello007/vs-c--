#include <iostream>
using namespace std; 

/*
This program takes input in the array and outputs teh array postioned such that if A[i]=j then out should be A[j]=i;
 https://www.geeksforgeeks.org/rearrange-array-arrj-becomes-arri-j/
 
*/
void InputArray(int A[],int n);
void Solve(int A[],int n);
void PrintArray(int A[],int n);

int main()
{
    int n;
    cout << "enter array size" << endl;
    cin >> n;
    cout << "enter array elements" << endl;
    int A[n];
    
    InputArray(A,n);
    Solve(A,n);
    PrintArray(A,n);
}
void InputArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    cin >> A[i];
}
void Solve(int A[],int n)
{
    for(int i=0;i<n;i++)
    A[A[i]%n]+=i*n;
    for(int i=0;i<n;i++)
    A[i]/=n;

}
void PrintArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    cout << A[i] << " "; 
}