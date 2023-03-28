#include <iostream>
/*
CONCEPT: FLAG VISITED NODES. 
question: find intersection point between two linked lists which are joined to form a Y shape.
https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1


*/
class Node
{
    public: 
    int data; 
    int flag; 
    Node *next;
};
int CommonPoint(Node *head1,Node *head2)
{
    while(head1)
    {
        head1->flag=1;
        head1=head1->next;
    }
    while(head2)
    {
        if(head2->flag==1)
        return head2->data;
        head2->flag=1;
        head2=head2->next;
    }   
    return -1; 
}
Node * Insert(int n)
{
    int x;
    Node *head=NULL; 
    Node *t,*last; 
    while(n--)
    {
        std::cin >> x; 
        t=new Node; 
        t->data=x;
        t->next=NULL;
        t->flag=0; 
        if(head==NULL)
        {
            last=t; 
            head=t; 
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
    int n1,n2,n3; 
    Node *head1,*head2,*common; 
    std::cin >> n1 >> n2 >> n3;
    head1= Insert(n1);//inserting head1 elements till just before common point
    head2= Insert(n2);//inserting till just before common point. 
    common = Insert(n3);//inserting common point and then further. 

    Node *temp;//basically making the Y shape linked list for the question. //driver code. 
    temp=head1; 
    while(temp->next) temp=temp->next; 
    if(temp) temp->next=common; 

    temp=head2; 
    while(temp->next) temp=temp->next; 
    if(temp) temp->next=common;
    //driver code ends
    
    std::cout << "----------" << std::endl; 
    std::cout << CommonPoint(head1,head2) << std::endl;
}