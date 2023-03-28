#include <iostream>
/*
this is used to calculate the number at the position of the fibonacci series. 
Now the time complexity of this code is (2^n). 

this is because of excessive recursion as the functions are being called execessively. 
It it calculating the calling function more than once or its recalculating the 
values of those function calls whose values have been found before too. 
*/
int fib(int n)
{
    if(n<=1)
    return n; 
    else 
    {
        return fib(n-2)+fib(n-1);
    }
    
}
int main()
{
    int n; 
    std::cin >> n; 
    std::cout << fib(n);
}