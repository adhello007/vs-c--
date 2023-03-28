#include <iostream>
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
    first->next=NULL;
    last=first; 

    for(int i=1;i<n;i++)
    {
        t=new Node; 
        t->data=A[i];
        t->next=NULL;
        last->next=t; 
        last=t;
    }
}
void InsertNode(Node *p,int pos,int new_data)
{
    pos-=2;
    while(pos--)
    p=p->next;

    Node *new_node=new Node; 
    new_node->data=new_data; 
    new_node->next=p->next; 
    p->next=new_node;
    
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
    int n;
    std::cin >> n; 
    int A[n];

    for(int& x:A)
    std::cin >> x;
     
    Create(A,n);
    InsertNode(first,3,13);//insert 13 at 3rd position of the list. meaning the third number in the list would be 13. 
    //this is not the same as index. 
    Display(first);
}