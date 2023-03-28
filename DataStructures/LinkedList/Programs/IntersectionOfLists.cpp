#include <iostream>
//This program finds the intersection of the two linked list's elements and outputs them . 
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
void Insert(Node **p,int x)
{
    Node *last; 
    Node *t=new Node; 
    t->data=x;
    t->next=NULL;

    if(*p==NULL)
    {
        *p=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}
void Connect(Node *head1,Node *head2)
{
    Node *p=head1;
    while(p->next)    p=p->next;

    p->next=head2;
}
int Max(Node *p)
{
    int max=0;
    while(p)
    {
        if(p->data>max)
        max=p->data;
        p=p->next;
    }
    return max;
}
Node * Solve(Node *p)
{
    int size = Max(p) + 1;
    int A[size];//
    for(int& x:A)//we are using a hash array type
    x=-1;

    
      
    Node *new_first=NULL;
    Node *last;

    while(p)
    {
         A[p->data]+=1;
         p=p->next;
    }    


    for(int i=0;i<size;i++)
    {
        if(A[i]>=1)
        {
            Node *new_node=new Node;
            new_node->data=i;
            new_node->next=NULL;

            if(new_first==NULL)
            {
                last=new_node;
                new_first=new_node; 
            }
            else
            {
                last->next=new_node;
                last=new_node;
            }

        }
    }
    return new_first;
}
int main()
{
    int n,x;
    Node *first=NULL,*second=NULL;
    std::cin >> n; 
    while(n--)
    {
        std::cin >> x;
        Insert(&first,x);
    }
     std::cin >> n; 
    while(n--)
    {
        std::cin >> x;
        Insert(&second,x);
    } 

    Connect(first,second);//we connect both the lists to make it a single list 

    Node *final=Solve(first);
    std::cout << "--------------" <<std::endl;
    Display(final);



}