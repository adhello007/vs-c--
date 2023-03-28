#include <iostream> 
/*
the process of not calling the already called functions again 
in the calling tree is called memoization.
here, once the value of one fibnoacci value is available we assign it 
to the array and then we take its value from there itself when the function calls it again  . 

This reduces time complexity to O(n); 
*/
int fib(int F[],int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n; 
    }
    else 
    {
        if(F[n-2]==-1)
        F[n-2]=fib(F,n-2);
        if(F[n-1]==-1)
        F[n-1]=fib(F,n-1);

        return F[n-2]+F[n-1];
    }
}
int main()
{
    int n; 
    std::cin >> n;
    int F[n];

    for(int& x:F)
    x=-1;
    
    std::cout << fib(F,n);
}

