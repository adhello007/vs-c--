#include <iostream>
using namespace std; 

template <typename T> T myMax(T x,T y)
{
  return (x+y) ? x:y;
}
int main()
{
    cout << myMax<int>(3,7)  << endl;
    cout << myMax<float>(2.1,9.5) <<endl;
    cout << myMax<char>('d','m');
}
