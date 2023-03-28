#include <iostream>

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


void Reverse(Node *p)//this method is called the sliding pointer method. 
{
    Node *q=NULL,*r=NULL;
    while(p)
    {
        r=q;
        q=p;
       p=p->next; 
        
        q->next=r;
        
    }
    first=q;
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
    

    Reverse(first);
    std::cout << "-------------------" << std::endl;
    Display(first);
    
    
}