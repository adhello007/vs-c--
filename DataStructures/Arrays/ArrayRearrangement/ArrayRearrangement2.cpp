#include <iostream>
using namespace std;

/* METHOD 1. here we have posotivand negative integers in our input array and wee  have to output positive and negative
 integers 
alternatively and print the remaining integers at the end. 
*/

int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int A[n];
    cout << "enter array elements" << endl;
    for(int& x:A)
    cin >> x;
    //we have the array
    int count=0;  
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        count++;
    }
    int ptemp[n-count];
    int ntemp[count];  
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        ntemp[b++]=A[i];
        else
        ptemp[a++]=A[i];
    }
   //made two arrays of positive and negative 
    if(b<=a)
    {
        int i=0,j=1,t=0;
        while(b--)
        {
            A[i]=ptemp[t];
            i+=2;
            A[j]=ntemp[t++];
            j+=2;
        }
        for(int k=j-1;k<n;k++)
        A[k]=ptemp[t++];
    }
    else if(a<b)
    {
        int i=0,j=1,t=0;
        while(a--)
        {
            A[i]=ptemp[t];
            i+=2;
            A[j]=ntemp[t++];
            j+=2;
        }
        for(int k=j-1;k<n;k++)
        A[k]=ntemp[t++];
    }
    
    for(int x:A)
    cout << x << " ";


}
