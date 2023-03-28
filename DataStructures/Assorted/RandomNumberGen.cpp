#include <iostream>
#include <cstdlib>
#include <ctime>//allows us to access the clock of the computer 
using namespace std;
int main()
{ 
    srand(time(0));//time(0) is generating a new number based on the time 
    //and since time is changing constantly srand function is getting a new number
    //which hence forth is giving it to rand and the numbers displayed are truly 
    //random. 
    for(int x=0;x<20;x++)
    {
        cout << (rand()%6)+1 << endl; 
    }
    
}