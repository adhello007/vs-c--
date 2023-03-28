#include <iostream>
using namespace std; 
/*IMP conceptual question: 
https://www.geeksforgeeks.org/rearrange-array-maximum-minimum-form-set-2-o1-extra-space/
*/
void Input(int A[],int n);
void Rearrange(int A[],int n);
void PrintArray(int A[],int n);
int main()
{
    cout << "enter array size" << endl;
    int n; 
    cin >> n;
    cout << "enter array elements" << endl;
    int A[n];
    Input(A,n);
    Rearrange(A,n);
    PrintArray(A,n);
}
void Input(int A[],int n)
{
    for(int i=0;i<n;i++)
    cin >> A[i];
}
void Rearrange(int A[],int n)
{
    int maxe=A[n-1]+1;
    int *min=A;
    int *max=&A[n-1];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
          A[i]+=(*max%maxe)*maxe;
          max--;
        }
        else
        {
            A[i]+=(*min%maxe)*maxe;
            min++;
        }
    }
    for(int i=0;i<n;i++)
    A[i]/=maxe;
    
}

void PrintArray(int A[],int n)
{
    for(int i=0;i<n;i++)
    cout << A[i] << " ";
}