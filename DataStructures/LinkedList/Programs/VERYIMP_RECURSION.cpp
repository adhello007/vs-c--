#include <iostream>
//Recrusive way to permanently reverse a list. 

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
        std::cout << p->data << " "; 
        p=p->next;
    }
      std::cout << p->data << std::endl; 
}
Node * Insert(int n)
{
    int x;
    Node *last,*t; 
    Node *head=NULL;
    while(n--)
    {
        std::cin >> x; 
        t=new Node; 
        t->data=x; 
        t->next=NULL;

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

  Node* reverse(Node *head)//permanently reverses a list. 
    {
        // Your code here
        if(!head || !head->next) return head; 
        
            Node *result = reverse(head->next); //do it on paper. this allows 2 pointer type approach and has use in many ques.
            head->next->next = head; 
            head->next = NULL; 
        
        return result;
    }
int main()
{
    int n; 
    std::cin >> n; 
    Node *head=Insert(n);
    
    
   Node *ans= reverse(head);
   std::cout << "--------" << std::endl; 
   Display(ans);

}