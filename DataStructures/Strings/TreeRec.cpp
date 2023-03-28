#include <iostream>
//the time complexity is the sum of GP of 2^0 + 2^1 + 2^2 ......2^n;
//space complexity is n+1 which means order of n O(n)
void func(int n)
{
    if(n>0)
    {
        std::cout << n << " ";
        func(n-1);
        func(n-1);
    }
}
int main()
{
    int x=3;
   // std::cin >> x;
    func(x);
}