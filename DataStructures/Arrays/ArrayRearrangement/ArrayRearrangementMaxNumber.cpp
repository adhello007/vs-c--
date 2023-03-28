#include <iostream>
#include <cstdlib>
#include <algorithm>//for sort function
#include <string>
#include <cmath>
using namespace std;

/*
this outputs the number which is maximum when the array numbers are arranged a certain way. 

{12,34,67,86} = 86673412 
*/
void Input(int A[],int n);
void Solve(int A[],int n);
int Compare(int A[],int i,int j);
void PrintArray(int A[],int n);
int main()
{
   int n;
   cout << "enter size" << endl;
   cin >> n;
   cout << "enter array" << endl;
   int A[n];
   Input(A,n);
   Solve(A,n);
   PrintArray(A,n);
}
void Input(int A[],int n)
{
    for(int i=0;i<n;i++)   
    cin >> A[i];
}
void Solve(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(Compare(A,i,j))
            swap(A[i],A[j]);
        }
    }
    
}
int Compare(int A[],int i,int j)
{
    int a,b=0;
    string d1=to_string(A[i]);
    string d2=to_string(A[j]);
    int l1,l2=0;
    l1=d1.length();
    l2=d2.length();

    a=A[i]*(pow(10,l2))+A[j];
    b=A[j]*(pow(10,l1))+A[i];
    if(a>b)
    return 0;
    else
    return 1;
}
void PrintArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    cout << A[i];
    cout << endl;
}