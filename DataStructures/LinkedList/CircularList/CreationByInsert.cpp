#include <iostream>
class Node
{
    public:
    int data; 
    Node *next; 
}*first=NULL;
void Insert(int x)
{
    Node *last,*t; 
    t=new Node; 
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
       first->next=first;
        last=t;
    }
    else
    {
        t->next=last->next; 
        last->next=t; 
        last=t;
    }
}
void Display(Node *p)
{
    //for(int i=0;i<10;i++)
    do
    {
        std::cout << p->data << std::endl;
        p=p->next; 
    }while(p!=first);
}
int main()
{
    int n,x; 
    std::cin >> n; 
    while(n--)
    {
        std::cin >> x; 
        Insert(x);
    }
    std::cout << "--------" << std::endl;
    Display(first);
}