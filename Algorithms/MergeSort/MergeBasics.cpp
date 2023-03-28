#include <iostream>
/*
This is the process to merge two arrays into a single array. 

This concept is highly important as we can also use this algorithm to 
merge two segments of the same array together.
The file MergeOneArray will show us how to do that.  
*/
void Merge(int A[],int B[],int C[],int m,int n)
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(A[i]<B[j])
        C[k++]=A[i++];
        if(B[j]<A[i])
        C[k++]=B[j++];

    }
    for(;i<m;i++)
    C[k++]=A[i];
    for(;j<n;j++)
    C[k++]=B[j];
}
int main()
{
    int A[5]={2,4,7,12,19};
    int B[8]={3,5,8,16,21,24,26,28};
    int C[13]; 

    Merge(A,B,C,5,8);

    for(int i=0;i<13;i++)
    std::cout << C[i] << " ";
}