#include <iostream>
//Here we are using the concept of double pointers. 
//so 'top' is the pointer head of the first stack that we have. 
class Node 
{
    public:
    int data;
    Node *next; 
};

void push(Node **head,int x)
{   
    Node *t;
    t=new Node;

    if(t==NULL)//if the node is not created that means the heap memory is full
    std::cout << "stack overflow" << std::endl;
    else
    {
        t->data=x;
        t->next=*head;
        *head=t;
    }
}
int pop(Node **head)
{
    Node *p;
    int x=-1;
    if(*head==NULL)
    std::cout << "stack underflow" << std::endl;
    else
    {
        p=*head;
        x=p->data;
        *head=p->next;
        delete p;
    }
    return x;
}
void Display(Node **head)
{
    Node *p=*head;
    while(p)
    {
        std::cout << p->data << " ";
        p=p->next;
    }
    std::cout << std::endl;
}
int peek(Node **head,int pos)
{
    Node *p=*head;
    if(*head==NULL)
    std::cout << "stack is empty" <<std::endl;
    for(int i=0;p!=NULL && i<pos-1;i++)
    p=p->next;

    if(p)
    return p->data; 
    else 
    {
        std::cout << "invalid position" << std::endl;
        return -1; 
    }
    
    
}
int main()
{
     Node *top=NULL;
    push(&top,5);
    push(&top,10);
    push(&top,15);
    push(&top,20);
    push(&top,25);
    std::cout << pop(&top) << "  popped"<<std::endl;
    
    std::cout << peek(&top,3) << " peek"<< std::endl;
    

    Display(&top);
}