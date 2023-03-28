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
void InputVec(vector<int> &v)
{
    int n;
    cin >> n;  //vectors are of dynamic size but we'd like an initial size of the vector which we can increase or decrease 
    //later on in the code. 
    for(int i=0;i<n;i++)
    {
        int x; 
        cin >> x; 
        v.push_back(x);//adding value at the back of the array. since 
        //value of array the first time is 0, then x becomes the first element 

    } 
}
int main()
{
    vector<int> v; //now currently the size of this array is 0. 
    //we can also pre-fill a vector :  vector<int> v(5,2); OUTPUT: 2 2 2 2 2 
    InputVec(v);
    printVec(v);


}