#include <iostream>
#include <climits>
#include <cmath>

using namespace std;
/*This is method 4 and its called the reverse algorithm method which rotates your code anticlockwise. We reverse the 0 to d-1 
elements and then d to n-1 and then thee entire array to get the answer. */
void leftRotate(int A[],int d,int n);
void printArray(int A[],int n);

int main() 
{ 
    int A[7]={1,2,3,4,5,6,7};
    int d=0;
    cin >> d;
    int n=(sizeof(A)/sizeof(A[0]));
    
    for(int x:A)
    cout << x << " ";
    cout << endl;
    leftRotate(A,d,n);
    printArray(A,n);
}

void reverse(int A[],int d,int n)
{
    while(d<n)
    {
        swap(A[d],A[n]);
        d++;
        n--;
    }
}
void leftRotate(int A[],int d,int n)
{
    if(d!=0)
    {
        if(d>n)
        d=d%n;//this means thaat since the array is 7 length long and if we need to rotate the entire array by 8 positions,
        //that is equal to rotating it once. cause 8-7 =1;

        reverse(A,0,d-1);
        reverse(A,d,n-1);
        reverse(A,0,n-1);
    }


}


void printArray(int A[],int n)
{
    for(int x=0;x<n;x++)
    {
        cout << A[x] << " ";
    }
}






