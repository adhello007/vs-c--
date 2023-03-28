#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;
//so this code is for binary search and it does that by fixing lows 
//and highs and finding mid and comparing if the 'key' is lesser 
//or more than the mid. then it adjusts low and high.

int main() 
{
    int A[9]={2,4,6,8,10,12,14,16,18};
    int l,h,mid,key;
    l=0,h=8;
    cout << "enter key" <<endl;
    cin>>key;
    
    while(l<=h)
    {
        mid =(l+h)/2;
        if(A[mid]==key)
        break;
        else if(A[mid]<key)
        {
            l=mid+1;
        //    mid=(l+h)/2;
        }
        else 
        {
            h=mid-1;
          //  mid=(l+h)/2;

        }
    }
    cout << mid+1 <<endl;
    
}

    
    











