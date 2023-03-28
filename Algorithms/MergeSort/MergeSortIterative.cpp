#include <iostream>
//2 WAY MERGE SORT ALGORITHM FOR AN ARRAY.

/*
This is an ITERATIVE method. Analayse this code 
on paper properly cause its not that easy to understand mentally. 
*/
void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int temp[h+1];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        temp[k++]=A[i++];
        if(A[j]<A[i])
        temp[k++]=A[j++];
    }
    for(;i<=mid;i++)
    temp[k++]=A[i];
    for(;j<=h;j++)
    temp[k++]=A[j];

    for(i=l;i<=h;i++) 
    A[i]=temp[i];

}
void MergeSort(int A[],int n)
{
    int p,l,mid,h; 
    for(p=2;p<=n;p*=2)//this is the number of passes. 
    {
        for(int i=0;i+(p-1)<n;i+=p)//this takes small lists with each passing. 
        {
            l=i;
            h=i+(p-1);
            mid=(l+h)/2;
            Merge(A,l,mid,h);
        }
       
    }
     if(n%2!=0)
        Merge(A,0,p/2,n-1);
}
int main()
{
    int n=8;
    int A[n]={8,3,7,4,9,2,6,5};
    
    MergeSort(A,n);
    for(int i=0;i<n;i++)
    std::cout << A[i] << " ";

}