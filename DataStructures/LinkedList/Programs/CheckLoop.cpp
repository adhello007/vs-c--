#include <iostream>
//Check if a list is looped and if so, then count the number of nodes in the loop.
class Node 
{
    public: 
    int data; 
    Node *next; 
}*first=NULL;
void Insert(int x)
{
    Node *last; 
    Node *t=new Node; 
    t->data=x;
    t->next=NULL;
    if(first==NULL)
    {
        last=t;
        first=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

int CountLoop(Node *fix)
{
    int count=0; 
     Node *q=fix;
    while(q->next!=fix)//we move q in the loop and if it encounters fix again then it returns the count value
    {
        count++;
        q=q->next;
    }
    if(q->next==fix)
    {
        count++;
        return count;
    }
    return 0;
     
}
int CheckLoop(Node *p)
{
    Node *q=p;
    do
    {
        q=q->next->next;
        p=p->next;
        if(p==q)
         return CountLoop(p);//finding out the position difference between the loop.
    }while(q);
    
    return 0;
}


int main()
{
    int n,x;
    std::cin >> n; 
    while(n--)
    {
        std::cin >> x; 
        Insert(x);//insert 9 nodes. 
    }

    Node *t1,*t2; 
    t1=first->next->next->next->next;
    t2=first->next->next->next->next->next->next->next->next;
    t2->next=t1;
    std::cout << CheckLoop(first);
    
}