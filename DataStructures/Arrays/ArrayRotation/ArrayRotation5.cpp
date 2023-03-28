#include <iostream>
#include <climits>
#include <cmath>

using namespace std;
/*we have a sorted rotated pair and have to find out if the input number is equal to the sum of any two numbers in the array. 
Now the approach is to re-rotate the rotated array back to its original position and once it is normal, we add two numbers 
one by one to see if their sum equals the input number. */
int Pair(int A[],int n,int num);
int main() 
{   
    while(1)//just to test the programn again and again 
    {
     int A[6]={11,15,26,38,9,10};
    int d=0,num,n;
    n=6;
    cin >> num;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]>A[i+1])
        d=n-1-i;
    }
    
    int temp[d];

    for(int x:A)
    cout << x << "  ";  

    cout << endl;
    int a=0;
    for(int i=n-d;i<n;i++)
    temp[a++]=A[i];

    for(int i=n-1-d;i>=0;i--)
    A[i+d]=A[i];

    for(int i=0;i<d;i++)
    A[i]=temp[i];

    for(int x:A)
    cout << x << "  ";
    cout << endl;
      
     if(Pair(A,n,num))
     cout << "true" << endl;
     else 
     cout << "false" << endl;
   
  }
    

}
int Pair(int A[],int n,int num)
{
    //normal method. 
   /*
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]+A[j]==num)
            return 1;
            
        }
    }
    return 0;

   */


//pointer method
  int *p=A;
  int *q=&A[n-1];       
    
    while(q-p>0)
    {
        if(*p+*q==num)
        return 1;
        else if(*p+*q>num)
        q--;
        else if(*p+*q<num)
        p++;
        
    }
    return 0;

}
