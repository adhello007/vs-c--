#include <iostream>
using namespace std;

/*
    BEST ARRAY REARRANGEMENT ALGORITHM out of all.  
    Segregate positive and negative numbers in the array without changing their arrangement. 
    IMPORTANT CONCEPT. 
*/
void RightRotate(int A[],int *c,int *c2);
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
   int c=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>=0)
        c2++;
        else if(A[i]<0)
        {
            RightRotate(A,&c,&c2);//we rotate so that we dont change the arrangement order. 
            c++;
            c2++;
        }
    }
    
    for(int x:A)//seperated positve and negative numbers.
    cout << x << " ";
    cout << endl;


    for(int a=1;a<n;a+=2)
    {
        if(A[a-1]>0)
        break;
        else 
        {
            RightRotate(A,&a,&c);
            c++;
        }
    }
    for(int x:A)//alternate numbers of positive and negative without changing their arrangement
    cout << x << " ";
    cout << endl;

}
void RightRotate(int A[],int *c,int *c2)
{
    int temp=A[*c2];
    for(int i=*c2-1;i>=*c;i--)
    A[i+1]=A[i];
    A[*c]=temp;
}

