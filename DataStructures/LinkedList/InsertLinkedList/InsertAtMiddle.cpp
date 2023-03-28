#include <iostream>
class Node
{
    public:
    int data; 
    Node *next; 
};
void InsertNode(Node *prev_node,int new_data)
{
    Node *new_node=new Node; 
    new_node->data=new_data; 

    new_node->next=prev_node->next; //new node will point to where prev node was pointing
    prev_node->next=new_node; //previous node will point to new node. 
}
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

    InsertNode(second,13);//this will insert it from the middle 
    Node *p=head; 

    while(p!=NULL)
    {
        std::cout << p->data << std::endl;
        p=p->next;
    }



}