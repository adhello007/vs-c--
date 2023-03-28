#include <iostream>
using namespace std;
void RightRotate(int A[],int k,int n);
void SumOfArray(int A[],int k1, int k2, int n );
void LeftRotate(int A[],int k,int n);
/*program link: 
https://www.geeksforgeeks.org/queries-left-right-circular-shift-array/

*/
int main()
{
    int n;
        cout << "enter size of array" << endl;
    cin >> n;
    int A[n];
    for(auto& x:A)
    cin >> x;
    //now you have the array
     int a;
    do
    {
        int query[3];
        int c=3;
       
        for(int i=0;i<c;i++)
        {   
            cin >> query[i];
            if(query[0]==-1)
            break;
            if(query[0]==1 || query[0]==2)
            c--;
            else 
            continue;
        }
     
        a=query[0];
        if(a==-1)
        break;
        if(query[0]==1)
        RightRotate(A,query[1],n);
        else if(query[0]==2)
        LeftRotate(A,query[1],n);
        else if(query[0]==3)
        SumOfArray(A,query[1],query[2],n);
    }while(a=-1);
    
    

}
void RightRotate(int A[],int k,int n)
{
    int B[n];
    for(int i=0;i<n;i++)
    B[(i+k)%n]=A[i];

    for(int i=0;i<n;i++)
    A[i]=B[i];//assigning it back to A. 

    cout << "After rotating right " << k << " times" << endl;
    for(int i=0;i<n;i++)
    cout << A[i] << " ";
    cout << endl;

}
void LeftRotate(int A[],int k,int n)
{
    int B[n];
    for(int i=0;i<n;i++)
    {
        if(i-k<0)
        B[(n+(i-k)%n)]=A[i];
        else
        B[(i-k)%n]=A[i];
    }
    for(int i=0;i<n;i++)
    A[i]=B[i];

     cout << "After rotating left " << k << " times" << endl;
    for(int i=0;i<n;i++)
    cout << A[i]<< " ";
    cout << endl;

}
void SumOfArray(int A[],int k1, int k2, int n)
{
    int sum=0;
    for(int i=k1;i<=k2;i++)
    sum+=A[i];
    
    for(int i =0;i<n;i++)
    cout << A[i] << " ";
    cout << endl;
    cout << "sum is " << sum << endl;
}