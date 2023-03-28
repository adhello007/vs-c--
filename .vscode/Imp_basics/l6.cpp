#include <iostream>
//simple way to seperate postive and negative numbers without worrying about arrangement. 
int main()
{
    int n; 
    std::cin >> n; 
    int A[n];

    for(int& x:A)
    std::cin >> x; 
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>=0)
        std::swap(A[i],A[p++]);
    }    

    for(int x:A)
    std::cout << x << " "; 
}