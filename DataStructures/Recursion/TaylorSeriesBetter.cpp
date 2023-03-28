#include <iostream>
/*
This is a much better approach to taylor series as the number of 
times of multiplication has been reduced by taking commons in the series and 
the time complexity is O(n) now which is wayy better than the previous algorithm. 

this can also be done by a loop instead of a recursive method and the code would 
be quite similar to this. 

*/
float e(float x,float n)
{
    static float s=1; 
    if(n==0)
    return s; 
    else 
    {
        s=1+(x/n)*s;//this is the core of this algorithm. 
        return e(x,n-1);
    }
}
int main()
{
    std::cout << e(2,5);
}