#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

//displays the rreverse of a number. just displays it one digit after the other.
int main() 
{
    int n,l;
    cin >> n;
    string s=to_string(n);
    l=s.length();

    for(int i=0;i<l;i++)
    {
        cout << n%10 << " ";
        n/=10;
    }
    
  

}





