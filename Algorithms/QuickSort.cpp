#include <iostream>
/*
This algorithm has a time complexity of O(n^2) IF given a sorted array.
*/
int Partition(int A[],int l,int h)
{
    int pivot=A[l];
    int i=l,j=h;//using dowhile loop so l value starts from 0 because it will make it 1. 
    do
    {
        do
        {
            i++;
        }while(A[i]<=pivot);
        while (A[j]>pivot)
        {
            j--;
        }
        
        if(i<j)
        std::swap(A[i],A[j]);

    } while (i<j);

    std::swap(A[l],A[j]);
    return j;
    
}
void QuickSort(int A[],int l,int h)
{
    int j; 
    if(l<h)
    {
        j=Partition(A,l,h);
        QuickSort(A,l,j-1);
        QuickSort(A,j+1,h);
    }
}
int main()
{
    int n; 
    std::cin >> n; 
    int A[n];
//example : {70,40,10,30,60,20,50};
    for(int& x:A)
    std::cin >> x;

    QuickSort(A,0,n-1);

    for(int i=0;i<n;i++)
    std::cout << A[i] << " ";
}