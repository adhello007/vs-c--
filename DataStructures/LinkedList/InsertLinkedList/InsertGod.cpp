#include <iostream>
//this will insert data at any INDEX  of the linked list. 
//Also, THIS CAN BE USED TO ADD ELEMENTS IN A BLANK LINKED LIST
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
int Count(Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}
void Insert(Node *p,int index,int x)//highly important and useful function. 
{
    if(index<0 || index > Count(first))
    return;
    Node *t=new Node; 
    t->data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
         p=p->next;

          t->next=p->next;
         p->next=t; 
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
int main()
{
    int n;
    std::cin >> n; 
    int A[n];

    for(int& x:A)
    std::cin >> x; 

    Create(A,n);


    Insert(first,0,45);//this means 45 will be added at the 0th index. 
   
    /*
    VERY IMPORTANT: now we can also remove lines 72 - 79 and we can use the inserrt 
    function to add elements to an empty list. 

    When we created the 'first' pointer globally we had it in stack and it wasnt pointing anywhere. 
    Now in main we have only two functions: 

    Insert(first,0,45);
    Display(first);

    when first is passed to insert func, since its value is null, 
    the t node which is created in heap will be pointing to that, that is, t is pointing to null. (line 47)

    Then, the next line which says first=t, means that first is now pointing to t node, which means t node is the head node. 
    the list is of size 1 right now. 

    after that,If we write in main:
    Insert(first,1,50);

    then another element 50 is added to the list. 
    */ 
    Display(first);
}