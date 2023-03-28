#include <iostream>
/*
This is the RECURSIVE method of merging. Also this is officially 
known as MERGE SORT. 
*/
void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int temp[h+1];
    while(i<=mid && j<=h)
    {
        if(A[i]<=A[j])
        temp[k++]=A[i++];
        if(A[j]<=A[i])
        temp[k++]=A[j++];
    }
    for(;i<=mid;i++)
    temp[k++]=A[i];
    for(;j<=h;j++)
    temp[k++]=A[j];

    for(i=l;i<=h;i++)
    A[i]=temp[i];
}
void MergeSort(int A[],int l,int h)                                  
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        MergeSort(A,l,mid);//we are dividing the list into smaller and smaller pieces till it reaches 
        //one list per element.
        MergeSort(A,mid+1,h);                                                      
        Merge(A,l,mid,h);
    }
    
}
int main()
{
    int n=8;
    int A[n]={8,3,7,4,2,1,6,5};
    MergeSort(A,0,n-1);

    for(int i=0;i<n;i++)
    std::cout << A[i] << " ";
}