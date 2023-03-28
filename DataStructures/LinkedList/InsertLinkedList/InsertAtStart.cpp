#include <iostream>
class Node
{
    public:
    int data; 
    Node *next; 
};
int main()
{
    Node *head=new Node;
    Node *second=new Node;
    Node *third=new Node;
    head->data=10;
    head->next=second; 

    second->data=12; 
    second->next=third; 

    third->data=14; 
    third->next=NULL;
    //created a 3 node list. 
    Node *p=head; //a pointer pointing to head for traversing through the list. 

    while(p!=NULL)
    {
        std::cout << p->data << std::endl; 
        p=p->next; 
    } 
    std::cout << "--------------" << std::endl;



    Node *new_head=new Node; //new head
    new_head->data=8; //

    new_head->next=head;//IN DIRECT TERMS IT MEANS....WHEREVER HEAD WAS POINTING, NEW HEAD IS POINTING THERE. 
    head=new_head;//new head is now the head. 


    p=new_head;//pointing to new head and traversing through the new list. 
    while(p!=NULL)
    {
        std::cout << p->data << std::endl; 
        p=p->next; 
    } 


}