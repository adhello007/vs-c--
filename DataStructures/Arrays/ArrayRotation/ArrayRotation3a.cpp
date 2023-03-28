#include <iostream>
#include<climits>
using namespace std;
/*this is method 3 of array rotation clockwise. This is a formula based method which i do recommend using.*/
int main() 
{ 
    int A[7]={1,2,3,4,5,6,7};
    int B[7];
    int d,n=0; 
    n=7;
    cin >> d;
    for(int x:A)
    cout << x << "  ";  
    cout << endl;

    for(int i=0;i<n;i++)
    B[(i-d)%n]=A[i];
    

    for(int x:B)
    cout << x << "  ";
}












