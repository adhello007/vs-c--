#include <iostream>
//Thiss removes adjacent duplicates..pretty self explanatory
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


void RemoveDuplicates(Node *p)
{
    Node *q=first->next;
    
    while(q)
    {
       
        if(p->data==q->data)
        {
            p->next=q->next;
            delete q;
            q=p->next;
            //deleting the node deletes the node and not the pointer itself
        }
        else 
        {
            p=q;
            q=q->next;
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
    

    RemoveDuplicates(first);
    std::cout << "-------------------" << std::endl;
    Display(first);
    
    
}