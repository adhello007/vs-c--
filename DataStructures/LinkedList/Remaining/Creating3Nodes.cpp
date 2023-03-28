#include <iostream>
class Node
{
    public: 
    int data; 
    Node *next;
};
int main()
{
    Node *first=new Node;//this head node is pointing to the first node of linked list. 
    Node *second=new Node;
    Node *third=new Node; 

    first->data=10; 
    first->next=second; 

    second->data=12; 
    second->next=third; 

    third->data=14; 
    third->next=NULL;

    Node *p=first;//pointer p is pointing to the first pointer. 

    while(p!=NULL)
    {
        std::cout << p->data << std::endl;
        p=p->next;//store the next nodes location in the pointer. 
        //this way we TRAVERSE the entire linked list. 
    }
    
}