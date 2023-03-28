#include <iostream>
//we are 2 way doing merge sort here. that means the lists are sorted. 
class Node
{
    public:
    int data; 
    Node *next;
}*first=NULL, *second=NULL;
void InsertFirst(int x)
{
    Node *t=new Node; 
    Node *last; 
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
void InsertSecond(int x)
{
    Node *t=new Node; 
    Node *last;
    t->data=x;
    t->next=NULL;

    if(second==NULL)
    {
        second=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
Node * Merge()
{
    Node *third,*last; 
    if(first->data<second->data)
    {
        third=first; 
        last=first; 
        first=first->next;
        last->next=NULL;
        
    }
    else 
    {
        third=second; 
        last=second; 
        second=second->next;
        last->next=NULL;
         
    }
    while(first!=NULL && second!=NULL)
    {
        if(first->data < second->data)
        {
            last->next=first;
            last=first; 
            first=first->next; 
            last->next=NULL;

        }
        else 
        {
            last->next=second; 
            last=second; 
            second=second->next;
            last->next=NULL;
        }
        
    }
    if(first!=NULL) last->next=first;  
        else last->next=second;

        return third;
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
    int n,x;
    std::cin >> n;
    while(n--)
    {
        std::cin >> x;      
        InsertFirst(x);
    }
    std::cin >> n; 
    while(n--)
    {

        std::cin >> x; 
        InsertSecond(x);
    }
     Node *ans= Merge();
    std::cout << "---------------" << std::endl;
    Display(ans);

}
