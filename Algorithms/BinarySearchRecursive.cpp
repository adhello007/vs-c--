#include <iostream>
/*
We are using Recursion in binary search
we are using divide and conquer which means we 
are breaking the problem into smaller parts. 
in line 13, we are considering the last iteration when l and h are at the same position. 

otherwise if not, then we will take mid position. 
*/
int Binary(int A[],int l,int h,int key)
{
    int mid=0; 
    if(l==h)
    {
        if(key==A[l])
            return l+1;
        else 
        return 0;
    }
    else 
    {
        mid=(l+h)/2;
        if(key==A[mid])
        return mid; 
        else if(key<A[mid])
        return Binary(A,l,mid-1,key);
        else 
        return Binary(A,mid+1,h,key);
    }
}
int main()
{
    int A[]={3,5,7,8,9,12,14,17,19};
    int n=(sizeof(A)/sizeof(A[0]));
    if(Binary(A,0,n-1,12)==false)
    std::cout << "key not found" << std::endl;
    else 
    std::cout << Binary(A,0,n-1,12) << std::endl;
}