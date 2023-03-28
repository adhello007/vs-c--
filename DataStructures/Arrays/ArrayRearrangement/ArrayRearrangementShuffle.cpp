#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
void Input(int A[],int n);
void Solve(int A[],int n);
void PrintArray(int A[],int n);
/*
Shuffle an array randomly. It is a good question dont look at the sol, try it first. 
the array doesnt have to be from 1 to n. 
*/
int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        int n; 
    cin >> n;
    int A[n];
    Input(A,n);
    Solve(A,n);
    PrintArray(A,n);
    }
    
}
void Input(int A[],int n)
{
    for(int i=0;i<n;i++)
    cin >> A[i];
}
void Solve(int A[],int n)
{
    srand(time(0));
    for(int i=n-1;i>=0;i--)
    {
        int j=rand()%(i+1);//this j gives the index of the array to swap with. when you 
        //get a random index to swap with, the permuation becomes random. 
        swap(A[i],A[j]);
    }
}
void PrintArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    cout << A[i] << " ";
    cout <<endl;
}
