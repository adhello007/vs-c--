#include <iostream>
//here we have one list and it is seperated into two different linked lists.
class Node
{
    public:
    int data; 
    Node *next;
}*first=NULL,*second=NULL;
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
void Break(Node *p,int index)
{
    Node *q=p->next;
    for(int i=0;i<index-1;i++)
    {
        p=q;
        q=q->next;
    }
    second=q;
    p->next=NULL;
}
int main()
{

    int n,x,x2,n2;
    std::cin >> n;
    while(n--)
    {
        std::cin >> x;
        Insert(x);
    }
    
    
    Break(first,3);//2 means the second index will be the head of the split list. 
    Display(first);
      std::cout << "------------------" << std::endl;
    Display(second);
  
   
    
    
}