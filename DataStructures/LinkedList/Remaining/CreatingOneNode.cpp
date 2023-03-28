#include <iostream>
class Node
{
    public:
    int data; 
    Node *next; 
};
int main()
{
    Node *head=NULL;//head pointer in stack
    head=new Node;//this head pointer is pointing to the first node in the heap. 

    head->data=10; //assigning value 
    head->next=NULL;
    std::cout << head->data; 
    
}