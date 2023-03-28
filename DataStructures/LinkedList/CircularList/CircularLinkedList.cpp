#include <iostream>
//circular linked list.
class Node
{
    public: 
    int data; 
    Node *next; 
}*first=NULL;

void Create(int A[],int n)
{
    Node *t,*last; 
    first=new Node; 
    first->data=A[0];
    first->next=first;//make head node point itself because that means last->next is pointing to head.  
    last=first; 

    for(int i=1;i<n;i++)
    {
        t=new Node; 
        t->data=A[i];
        t->next=last->next;//here if its the 4th node in the list, it will point to last->next and that means it is pointing to 
        //head.  
        last->next=t;//we connect this current node to the previous node before we make last point to this current node.  
        last=t;
    }
}
void Display(Node *p)
{
     do 
     {
        //for(int i=0;i<10;i++)//this it to check how a circular linked list is printed. 
        //{
            std::cout << p->data << std::endl;
            p=p->next;
        //}
     }while(p!=first);
}
void InsertNode(int x)
{
    Node *p=first;
    Node *t=new Node; 
    while(p->next!=first)
    p=p->next;

    t->data=x;
    t->next=first;
    p->next=t; 

}
int main()
{
    int n; 
    std::cin >> n; 
    int A[n];
    for(int& x:A)
    std::cin >> x; 

    Create(A,n);
    std::cout << "-----------" << std::endl;
    InsertNode(2);
    InsertNode(12);
    Display(first);


}