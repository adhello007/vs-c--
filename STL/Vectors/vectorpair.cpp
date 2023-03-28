#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
void printvector(vector<pair<int,int>> &v)
{
    cout << "------------" << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i].first << " " << v[i].second << endl; 
    }
    cout << endl;
   
}
int main()
{
    vector<pair<int,int>> v; //every vector element will be a pair. 
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(4,6));

    //another way to declare the vector pair : 
    // v = {{2,3},{4,6}};
    printvector(v);
    

}