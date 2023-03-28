#include <iostream>
//this code adds a node at its correct position in a sorted list. 
//it also adds the node to the end if the list is smaller than the input node itself
class Node
{
    public:
    int data; 
    Node *next;
}*first=NULL;
void Insert(int x)
{
    Node *last;
    Node *t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
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
void InsertNode(Node *p,int x)
{
    Node *t=new Node;
    Node *q=NULL; 
    t->data=x;
    if(x<p->data)
    {
        t->next=first; 
        first=t;
        p=t;
    }   
    else
    {
        q=p;
        p=p->next;
        while(p->data<x)
        {
            q=p;
            if(p->next==NULL)
            {
                q->next=t;
                t->next=NULL;
            }
            p=p->next;
        }
        if(p->data >x)
        {
            t->next=q->next;
            q->next=t;
        }
    }
}
int main()
{

    int n,x;
    std::cin >> n;
    while(n--)
    {
        std::cin >> x;
        Insert(x);
    
    }//we created a list.
    

    InsertNode(first,12);
    std::cout << "-------------------" << std::endl;
    Display(first);
 
    
    
}