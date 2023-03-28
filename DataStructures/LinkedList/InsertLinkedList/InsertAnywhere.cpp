#include <iostream>
using namespace std; 
class Node 
{
    public: 
    int data; 
    Node *next;
}*first=NULL;
void Insert(int n)
{
    Node *last,*t; 
    while(n--)
    {
        int x; 
        cin >> x;
        t=new Node; 
        t->data = x; 
        t->next = NULL;

        if(first==NULL)
        {
            first = t; 
            last = t; 
        }
        else 
        {
            last->next= t; 
            last = t;
        }
    }
}
void Display(Node *p)
{
    while(p)
    {
        cout << p->data << " "; 
        p=p->next;
    }
    cout << endl;
    
}
void InsertPos(int pos,int x)
{
    int idx=pos-2;
    Node *p=first;
    Node *t=new Node; 
    t->data =x; 
    t->next=NULL;
    while(idx)
    {
        p=p->next;
        idx--;
    }
    t->next=p->next;
    p->next=t;
    p=nullptr;
}
int main()
{
    int n; 
    cin >> n; 
    Insert(n);
    
    
    int x,pos;//pos is not the index but the position at which you want the number starting from the begining of the list.
    cin >> x >> pos; 
    cout << "------------" <<endl;
    Display(first);
    cout << "------------" << endl;

    InsertPos(pos,x);
    Display(first);
}