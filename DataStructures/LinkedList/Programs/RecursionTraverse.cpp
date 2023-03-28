#include <iostream>
//This code shows how to move front and back throughout the list using RECURSION. 

class Node
{
    public: 
    int data; 
    Node *next; 
};
Node * RecursionList(Node *head)
{
    static Node *first=head; 
    if(head)
    {
        std::cout << head->data << std::endl;
        RecursionList(head->next);
        std::cout << head->data << std::endl;//return time 
    }
    
    return first;
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
        t->next = NULL; 

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
    Node *l1=Insert(n);
    std::cout << "--------------------" << std::endl;
    Node *first=RecursionList(l1);//its returning a node named first which was static and pointed at the head at the starting of the function.
    //std::cout << first->data; //we wanted the output just to see the efffect of static. 


}