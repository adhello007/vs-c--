#include <iostream>
//this is the iterative(loop) method and this has a time complexity of
//O(logn) and a space complexity of O(1);
int Binary(int A[],int n,int key)
{
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(A[mid]==key)
        return mid+1; 
        else if(key>A[mid])
        l=mid+1;
        else if(key<A[mid])
        h=mid-1;

    }
    return 0;
}
int main()
{
    int n; 
    int A[]={2,4,6,8,10,12,14,16,18};
    n=(sizeof(A)/sizeof(A[0]));

    if(Binary(A,n,12)==false)
     std::cout << "key not in the list" << std::endl;
     else 
     std::cout << Binary(A,n,12);

}