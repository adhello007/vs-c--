#include <iostream>
void Merge(int A[],int l,int mid,int h)
{
    int i,j,k; 
    i=l,j=mid+1,k=l;//the array is divided into two lists, 
    //one from l to mid and second from mid+1 to h.
    int temp[h+1];

    while(i<=mid && j<=h)
    //this procedure is the same as when we're merging two arrays 
    //into a single third array just that this time, the two arrays are 
    //basically two lists of the same array and the single third array here is 
    //a temporary temp array. 
    {
        if(A[i]<=A[j])
        temp[k++]=A[i++];
        if(A[i]>=A[j])
        temp[k++]=A[j++];
    }
    for(;i<=mid;i++)
    temp[k++]=A[i];
    for(;j<=h;j++)
    temp[k++]=A[j];

    for(i=l;i<=h;i++)//we're copying the merged array back to the A[] array. 
    A[i]=temp[i];
}
int main()
{
    int n=8; 
    //std::cin >> n;
    int A[n]={2,5,7,9,3,8,9,12};

    int l=0,h=n-1,mid=(l+h)/2; 

    Merge(A,l,mid,h);
    for(int i=0;i<n;i++)
    std::cout << A[i] << " ";
}