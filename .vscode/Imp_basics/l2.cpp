#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>

using namespace std;

//stores the reverse of a number in another integer. 
int main() 
{
    int n,r,rev=0;
    cin >> n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        rev= rev*10 +r;
    }
    cout <<rev;
    
}





