#include <iostream>
#include <string>
using namespace std;

//make all your  variables  in your class private 
//as it is a good coding habit. 

//instead of directly accessing a variable in a class
//we use public functions to do it. 
class MyClass
{
    public:
        MyClass(string z)
        {
            setName(z);
        }//constructor
        void setName(string x)
        {
            name =x;
        }
        string getName()
        {
            return name;
        }
    private:
        string name;


};
int main()
{
        MyClass obj("akshat"); 
        cout << obj.getName() << endl; 
}