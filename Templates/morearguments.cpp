#include <iostream>
using namespace std; 

template <typename T,typename U> class Example 
{
    private: 
    T x; 
    U y; 
    public: 
    Example(T a,U b);
    void Print();
};
template <typename T,typename U> Example<T,U>::Example(T a,U b)
{   
    x=a;
    y=b;

    cout << x+2 << endl;
    cout << y+2 << endl;
}
template <typename T,typename U> void Example<T,U>::Print()
{
    cout << "x is " << x <<endl;
    cout << "y is " << y << endl;
}
int main()
{
    Example<char,int> hello('a',10);
    hello.Print();
}