#include <iostream>
using namespace std; 
/*this code is for having even indexed positions be bigger than all previous numbers and odd indexed positions to have numbers
smaller than them. 
*/
int main()
{
    int n; 
    cin >> n; 
    int A[n];

    for(int& x:A)
    cin >> x; 

    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min]) min=j;
        }
        swap(A[i],A[min]);
    }//selection sort

    int count; 
    if(n%2==0) count=n/2;
    else count=n/2 +1;

    int temp[n];
    int a=n-count;
    for(int i=0;i<n;i+=2)
    {
        temp[i] = A[a++];
    }
    a=n-1-count;
    for(int i=1;i<n;i+=2)
    {
        temp[i]= A[a--];
    }

    for(int i=0;i<n;i++)
    {
        cout << temp[i] << " ";
    }
}