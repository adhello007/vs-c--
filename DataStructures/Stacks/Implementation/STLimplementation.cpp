#include <iostream>
#include <stack>
using namespace std; 
int main()
{
    stack<int> st; //best thing ive seen all day 
    
    st.push(12);
    st.push(13);
    st.push(22);
    //pop does NOT have a return type. 
    
    while(!st.empty())
    {
        int x =st.top();
        cout << x << endl; 
        st.pop();
    }
} 