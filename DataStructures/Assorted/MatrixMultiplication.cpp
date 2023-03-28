#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;
/*
multiplication of two matrices
*/

int main() 
{   
   int i,j,p,q=0;
   cout << "enter the number of rows and columns for the first matrix" <<endl;
   cin >> i >> j;
   cout << "enter the number of rows and columns for the second matrix" << endl;
   cin >> p >> q;
   int A[i][j];
   int B[p][q];
    int C[i][q];
    cout << "enter elements of the first matrix" << endl;
    for(auto& x:A)
    {
        for(auto& y:x)
        {
            cin >> y;
        }
        cout << endl;
    }

    cout << "enter elements of the second matrix" << endl;
    for(auto& x:B)
    {
        for(auto& y:x)
        {
            cin >> y;
        }
        cout << endl;
    }
    if(j==p)
    { 
     
      for(int i1=0;i1<i;i1++)
       {
           for(int q1=0;q1<q;q1++)
           {
                   int sum=0;
                   for(int p1=0;p1<p;p1++)
                   {   
                       sum+= A[i1][p1]*B[p1][q1];
                   }
                   C[i1][q1]=sum;
         } 
       }
    }
    else if(j!=p)
    {   
            cout << "not possible to mutiply these two matrices" << endl;
            
    }
    
    for(auto& x:C)
    {
        for(auto& y:x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    

    
    
}

    
    











