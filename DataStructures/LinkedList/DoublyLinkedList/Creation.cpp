#include <iostream>
class Node
{
    public:
    int data; 
    Node *next; 
    Node *prev;
}*last;

Node * Insert(int n)
{
   int x; 
   Node *t;
   Node *first=NULL; 
   while(n--)
   {
        t=new Node;
        std::cin >> x;  
        t->data=x; 
        t->next=NULL; 
        
        if(first==NULL)
        {
            first=t;
            last=t;
            first->prev=NULL;
        }
        else
        {
            last->next=t;
            t->prev=last;
            last=t;
        }
   }
   return first;

}
void Display(Node *p)
{

    do
    {
        std::cout << p->data << std::endl;
        p=p->prev; 
    }while(p);//no need for do while loop, even a normal while can be done. 
}
int main()
{
    int n; 
    std::cin >> n; 
    
    Node *head = Insert(n);

    std::cout << "--------" << std::endl;
    Display(head);
  std::cout << "--------" << std::endl;
    Display(last);

}