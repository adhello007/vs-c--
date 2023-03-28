#include <iostream>
using namespace std; 
//this code uses recursion to calculate the length of the linked list. 
class Node
{
    public: 
    int data; 
    Node *next; 
}*head=NULL;;
void Insert(int x)
{
    Node *last,*t;  
    t=new Node; 
    t->data =x; 
    t->next =NULL; 
    if(head==NULL)
    {
        head=t; 
        last =t;
    }
    else 
    {
        last->next =t; 
        last =t;
    }
}
int size(Node *p)
{
    if(p==NULL)
    return 0; 
    else 
    return size(p->next) +1;//this one will added during the back tracing of the recursion tree.
}
int main()
{
    int x; 
    while(1)
    {
        cin >> x;
        if(x==-1) break; 
        Insert(x);
    }

    cout << "size of the list: " <<size(head);
    cout << endl;
    
}