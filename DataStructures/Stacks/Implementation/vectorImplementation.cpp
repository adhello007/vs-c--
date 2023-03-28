#include <iostream>
#include <vector>
using namespace std; 
class Stack
{
    private: 
    vector<int> v;
    public:
    void push(int x);
    int pop();
    void Display();
};
void Stack::push(int x)
{
    v.push_back(x);
}
int Stack::pop()
{
     int x=-1;
     if(v.size()==0)
    cout<< "stack underflow" << endl; 
     x= v.back();
    v.pop_back();
    return x;
}
void Stack::Display()
{
    for(int i=v.size()-1;i>=0;i--)//start from v.size -1 ...##HIGHLY IMP CONCEPT
    {
        cout << v[i] << endl;
    }
}
int main()
{
    Stack st; 
    st.push(12);
    st.push(14);
    st.push(15);
    st.pop();
    
    st.Display();
    
    

    
}