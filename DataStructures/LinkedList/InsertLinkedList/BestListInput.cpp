#include <iostream>
//best and most efficient way of adding nodes to a list. 

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
int main()
{
    int n; 
    std::cin >> n; 
    Node *head=Insert(n);
    std::cout << "--------" << std::endl; 
    Display(head);

}