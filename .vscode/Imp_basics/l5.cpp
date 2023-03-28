#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

/*This teaches you how to get a pointer to point at another index in an array without changing the position of the array itself 
In specific, after running this loop, pointer p will point towards the biggest number in the array without sorting this array. 

its natural pointing is A[0]. as it goes through the loop, when it finds a number greater than the one its pointing at, the 
memory address of that index is saved to another pointer q. then by subtracting the two pointers, we get the distance
between the two elements in the array. Once we have the distance, it is added to pointer p which makes pointer p point to the 
element which was pointed by pointer q. This does NOT change the array positions themselves, but just makes the pointer point to 
a new bigger element. 
*/
int main() 
{   
    int A[5]={4,9,1,32,13};
    int *p=A;//A[0]
    for(int i=1;i<5;i++)
    {
       if(A[i]>*p)
       {
           int *q=&A[i];
           p+=(q-p);
       }
   
    }
    cout << *p << endl;
    
}
