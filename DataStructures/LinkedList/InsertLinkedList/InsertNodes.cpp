#include <iostream>
//this creates a linkeed list and then you can add as much many nodes as you want.
class Node
{
    public:
    int data;
    Node *next;
}*first=NULL;
void Insert(int x)
{
    Node *t,*last; 
    t=new Node; 
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;//we're using first because first will point to the head node and the next time, 
        //we come to the second node, we'll have last pointer assigning it to nodes. 
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void Display(Node *p)
{
    while(p)
    {
        std::cout << p->data << std::endl;
        p=p->next;
    }
}
int main()
{
    Insert(5);
    Insert(10);
    Display(first);
}