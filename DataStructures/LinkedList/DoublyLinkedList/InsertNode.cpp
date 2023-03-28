#include <iostream>
//We insert a node in a doubly linked list. 
class Node
{
    public: 
    int data; 
    Node *next; 
    Node *prev; 
}*last;
Node * Insert(int n)
{
    int x;
    Node *t; 
    Node *head=NULL; 
    while(n--)
    {
        t=new Node; 
        std::cin >> x; 
        t->data=x; 
        t->next=NULL;

        if(head==NULL)
        {
            head=t;
            last=t; 
            t->prev=NULL; 
        }
        else 
        {
            t->prev=last; 
            last->next=t; 
            last=t;
        }
    }
    return head; 
}
void InsertNode(Node **a,int x,int index)//i wanted to use double pointer. it is optional but 
//what i gain from doing this is that i simply changed what head pointer is pointing at by 
//changing the value of the double pointer which was holding the memory address of head pointer. (line 53)
{
    Node *p = *a,*q;
    for(int i=0;i<index-1;i++)
    p=p->next;

    q=p->next;
    Node *t=new Node; 
    t->data=x;
    if(index==0)//changing head pointer
    {   
        t->next=p;
        p->prev=t;
        t->prev=NULL;
        *a=t;//line 53
    }
    else
    {
        t->next=q; 
        q->prev=t;
        p->next=t;
        t->prev=p;
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
    int n; 
    std::cin >> n; 
    Node *head = Insert(n);

    InsertNode(&head,12,0);
    std::cout << "------" << std::endl;
    Display(head);

}
