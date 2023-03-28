#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void printVec(vector<int> &v)//here we pass the vector as a reference. it saves O(n) time as it is not copying
{
    for(int i=0;i<v.size();i++)
    cout << v[i] << " ";
    cout << endl;
}
int main()
{
    vector<int> v; //now currently the size of this array is 0. 
    v.push_back(4);
    v.push_back(5);
    
    vector<int> v2 =v; // O(n); this is a copy of the vector 
    //vector<int> &v2=v;//this is passing a reference of the original vector.
    v2.push_back(8);
    printVec(v);
    printVec(v2);
    
}