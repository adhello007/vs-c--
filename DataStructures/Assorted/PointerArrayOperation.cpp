#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
/*
    using pointers to change the value of ints in the arrays and printing 
    that very same array.
*/

int main() 
{   
   int t,t1=0;
  
     cin >> t;
     //t1=t;
     int A[t];
     for(int& x:A)//youll take a reference to the array as youre changing
     cin >> x;//the value of the element by storing the input. thats why &.
     

    
     
     int *p=A;
     int c=0;
   while(t--)
   {

      int sum=0;
      
      for(int i=1;i<*p;i++)//this pointer is when run the 1st time 
      //is pointing at the first array element. 
      {
        
         int x=pow(5,i);
         if(x>*p)
         break;
         sum +=*p/x;
        
      }
      
        *p = sum;  
        p++;//pointing to the next element/index in the array. 
   }
   for(int x:A)
   {
     cout << x << endl;
   }
   
  
 }

    
    











