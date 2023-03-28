#include <iostream>
/*
GGREAT QUESTION: merge two sorted arrays without taking extra space. WE ARE NOT ROTATING. 
read question first. 

https://www.geeksforgeeks.org/merge-two-sorted-arrays-o1-extra-space/
*/
void Solve(int A[],int B[],int n,int m)
{
    for(int i=m-1;i>=0;i--)
    {
        int j; 
        int last=A[n-1];
        for(j=n-2;j>=0 && A[j]>B[i];j--)
            A[j+1]=A[j];

        if(last>B[i])
        {
            A[j+1]=B[i];
            B[i]=last;
        }
    }
}
int main()
{
    int n,m; 
    std::cin >> n; 
    int A[n]; 
    for(int& x:A)
    std::cin >> x; 

    std::cin >> m; 
    int B[m];
    for(int& x:B)
    std::cin >> x; 

    Solve(A,B,n,m); 
    std::cout << "-------" << std::endl;

    for(int i=0;i<n;i++)
    std::cout << A[i] << " "; 
    std::cout << std::endl;

    for(int j=0;j<m;j++)
     std::cout << B[j] << " "; 
    std::cout << std::endl;


}