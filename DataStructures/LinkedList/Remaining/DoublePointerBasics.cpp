#include <iostream>
using namespace std; 
class Node
{
    public:
    Node *val; 
    Node *next;
};
int main()
{
    Node *first = new Node; 
    

    Node **q = &first; 

    cout << first << endl; //
    cout << &first << endl;
    cout << q << endl; 
}