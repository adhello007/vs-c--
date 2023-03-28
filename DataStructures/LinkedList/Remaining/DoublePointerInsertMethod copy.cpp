#include <iostream>
/*
    We are using only one insert function to create 2 lists. 
    we do this NOT by pass by value of the global head node in the 'insert' function but rather pass by reference. 
    to pass a pointer by reference we use the concept of DOUBLE POINTER. 


    A double pointer is a pointer which stores the address of a pointer. That means it is a pointer, to a pointer.
    We can pass the memory address of the global pointer which becomes the head of the list.   
*/ 
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
void Insert(Node **p,int x)//took a double pointer
{
    Node *last; 
    Node *t=new Node; 
    t->data=x;
    t->next=NULL;

    if(*p==NULL)//*p means we are accessing/dereferencing the value of the global pointer. 
    //by this we mean, we are seeing if the global pointer is holding any value, which means is it pointing to anything.
    {
        *p=t;//then let global pointer point to t node. 
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

int main()
{
    int n,x;
    Node *first=NULL,*second=NULL;
    std::cin >> n; 
    while(n--)
    {
        std::cin >> x;
        Insert(&first,x);//we are sending the memory address of the global pointer. 
    }
     std::cin >> n; 
    while(n--)
    {
        std::cin >> x;
        Insert(&second,x);
    } 

    
    std::cout << "-------------" << std::endl;
    Display(first);
    std::cout << "=============" << std::endl;
    Display(second);
}