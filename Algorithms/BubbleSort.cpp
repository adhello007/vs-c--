#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int n; 
    cin >> n; 
    vector<int> v; 

    for(int i=0;i<n;i++)
    {
        int x; 
        cin >> x; 
        v.push_back(x);
    }//input

    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=0;j<v.size()-i-1;j++)
        {
            if(v[j+1]<v[j]) swap(v[j],v[j+1]);
        }
    }

    for(int i=0;i<v.size();i++)
    cout << v[i] << " ";
    cout << endl;
}