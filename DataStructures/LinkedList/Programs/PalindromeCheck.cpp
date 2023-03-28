#include <iostream>
//In a singly linked list, check if a list is a palindrome or not. 
//HIGHLY IMPORTANT CODE RELATED TO RECURSION 
class Node
{   
    public:
    int data; 
    Node *next; 
}*first=NULL,*last,*q=NULL;
void Insert(int x)
{
    Node *t=new Node;
   
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        first=t;
        last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
     
}
int Count(Node *p)
{
    int l=0;
    if(p)
    {
        l++;
        return Count(p->next) +l;
    }
    return l;
}
void ReversePrint(Node *p)
{   
    static int ans=0;//answer value stays same in all calls. 
    if(p==NULL)
    return; 
    ReversePrint(p->next);  //lines after this code run at return time.
    if(p->data==q->data)
    ans++;
    q=q->next;
    if(ans==Count(first))
    std::cout << "palindrome";
}
int main()
{
    int n,x;
    std::cin >> n; 
    while(n--)
    {
        std::cin >> x;
        Insert(x);
    }
    q=first;
ReversePrint(first);
    
  
}