#include <iostream>
//This program deletes a node whos INDEX is input. 
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
void Delete(Node *p,int index)
{
    Node *q=NULL;
    if(index==0)
    {
        first=first->next;//make the head node pointer shift to the next pointer
        delete p;//delete p pointer as p was pointing at the first node
    }
    else 
    {
        for(int i=0;i<index && p;i++)//here we're not using index -1 as deleting a node reduces the overall index numbers
        {
            q=p;
            p=p->next;
        }
        if(p)
        {
            q->next=p->next;
            delete p;
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
    

    InsertNode(first,12);//inserted a node at the list
    Display(first);
     std::cout << "-------------------" << std::endl;
     Delete(first,4);//function related to this code's objective 
    Display(first);
    
    
}