#include <iostream>
#include <Algorithm>
//we are sorting a list. we are coverting a list to an array, sorting it, then converting it back to an array.
using namespace std;
class Node 
{
    public: 
    int data; 
    Node *next; 
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node * Insert()
{
    int n,x; 
    std::cin >> n; 
    Node *head=NULL,*t,*last;
    while(n--)
    {
        std::cin >> x; 
        t=new Node(x); 
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
void Display(Node *p)
{
    while(p)
    {
        std::cout << p->data << std::endl;
        p=p->next;
    }
}
Node * Create(int A[],int n)
    {
       int i; 
   
    Node *t,*last; 
     Node *first=new Node(A[0]); 
    
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node(A[i]); 
        t->next=NULL;
        last->next = t;
        
        last=t;
    }
    return first;
    }
    int size(Node *p)
    {
        int l=0; 
        while(p)
        {
            l++; 
            p=p->next;
        }
        return l;
    }
        Node* Sorting(Node* head) 
        {
            Node *p=head; 
            
            int l=size(p);//took the size of the list. 
            int A[l];
            for(int i=0;i<l;i++)//inputting list data in an array and sorting that array
            {
                A[i]=p->data; 
                p=p->next;
            }
            
            std::sort(A,A+l);        
            Node *first=Create(A,l);//creating another list and converting the array back to a linked list. 
            return first; 
        }//passed all test cases


int main()
{ 
    Node *head=Insert();
    Node *final=Sorting(head);
    std::cout << "--------" << std::endl;
    Display(final);
}
