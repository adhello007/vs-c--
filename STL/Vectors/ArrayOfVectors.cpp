#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std; 
void printVector(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";    
    }
    cout << endl;
}
int main()
{
    int N; 
    cin >>N;
    vector<int> v[N];
    /*here, the above line means that there is an array of vectors
    where each element is a vector. so each element of the size n array is a vector which can have n
    elements inside it.

    their sizes are 0 in the beginning 
    */

   for(int i=0;i<N;i++)
   {
        int n;//this is the size of the inner element vector
        cin >> n ; 
        for(int j=0;j<n;j++)//filling each element 
         {
            int x; 
            cin >> x; 
            v[i].push_back(x);
         }
   }

   cout << "------------" << endl;
   for(int i=0;i<N;i++)
   printVector(v[i]);

   /*
IMP:  basically, we have a vector array of a fixed size and inside it 
    there are elements and each element is a vector itself. so v[0] is a vector which can take 
    n number of integers. 

    we can think of this as a 2d matrix. 
    here, the number of rows are fixed as the outer vector declaration is 

    vector<int> v[N]; 

    so we have N number of rows. 

    And we can think of each vector element inside it (v[i]) as an empty row which is a vector 
    and can be filled with elements. which means filling up that particular row. 

    so, the length of each row is dynamic but the number of rows are predfined by a size of N. 


    we can access the values like : 
    v[0][2];
    
    this means the 0th row and the element on the second index. basically, the 3rd element/ 3rd column. 
    

   */




}