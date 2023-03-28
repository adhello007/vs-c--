#include <iostream>
//https://www.udemy.com/course/datastructurescncpp/learn/lecture/23244966#overview
int * funct(int n)//pointer return. 
{
    int *p=new int[n];//dynamic allocation. 
    for(int i=0;i<n;i++)
    p[i]=i+1;
    return p; 
}
int main()
{
    int *A; 
    A=funct(5);
    std::cout << A[2];
}