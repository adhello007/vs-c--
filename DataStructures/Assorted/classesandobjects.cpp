#include <iostream>
#include <string>
using namespace std;

class Temperature{
    public:
        void coolSaying()
        {
            cout << "whoa i typed this" << endl;
        }

};


int main()
{      
    Temperature t;//created an object 
    t.coolSaying();

}