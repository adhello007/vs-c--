#include <iostream>
//segregate odd and even numbers in a list. Placing even numbers first. 

class Node
{
    public: 
    int data; 
    Node *next;

};
void Display(Node *p)
{
    while(p)
    {
        std::cout << p->data << std::endl; 
        p=p->next;
    }
}
Node * Insert(int n)
{
    int x;
    Node *last,*t; 
    Node *head=NULL;
    while(n--)
    {
        std::cin >> x; 
        t=new Node; 
        t->data=x; 
        t->next=NULL;

        if(head==NULL)
        {
            head=t; 
            last=t; 
        }
        else 
        {
            last->next=t; 
            last=t;
        }
    }
    return head; 
}
Node * OddEven(Node *head)
{   
    Node *first=NULL;
    Node *first_o=NULL;
    Node *p=head; 
    Node *q,*last; 

    while(p)
    {
        if(p->data%2==0)
        {
            if(first==NULL)
            {
                first=p;
                last=p;
            }
            else
            {
                last->next=p; 
                last=p;
            }
        }
        else
        {
            if(first_o==NULL)
            {
                q=p;
                first_o=q;
            }
            else
            {
                q->next=p;
                q=p;
            }
        }
        p=p->next;
    }


    if(first_o==NULL)
    {
        last->next=NULL;
        return first;
    }
    else if(first==NULL)
    {
        q->next=NULL;
        return first_o;
    }
    else
    {
        last->next=first_o;
        q->next=NULL;
        return first;
    }
    
}
int main()
{
    int n; 
    std::cin >> n; 
    Node *head=Insert(n);//getting the list; 
    Node *ans=OddEven(head);
    std::cout << "--------" << std::endl; 
    Display(ans);

}