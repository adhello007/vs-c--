#include <iostream>
//this is pretty important to understand as this is 
//the first recursive program which is difficult to undestand. 
//watch udemy ds by abdul bari, taylor series recursion. 

float e(int x,int n)
{
    static float p=1,f=1;
    float r=0; 
    if(n==0)
    return 1; 
    else
    {
        r=e(x,n-1);
        p*=x;
        f*=n;
        return r+p/f;
    }
}
int main()
{
    std::cout << e(2,5);
}
//NOTE: 
/*
the time complexity of this algo is O(n^2);
*/