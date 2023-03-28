#include <iostream>
#include <vector> 
using namespace std; 
//correct way of array rearrangement with VECRTOR
void rightrotate(vector<int> &v,int *c,int *c2)
{
    int temp=v[*c2];
    for(int i=*c2-1;i>=*c;i--)
    v[i+1]=v[i];
    v[*c]=temp;
}
void printvec(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    cout << v[i] << " ";
    cout << endl;
}
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
    }//input of vector

    int c=0,i=0;
    while(i<v.size())
    {
        if(v[i]%2!=0)
        {
            rightrotate(v,&c,&i);
            i++;
            c++;
        }
        else i++;
    }//segregation is done

    printvec(v);

}