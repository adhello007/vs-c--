#include <iostream>
class Node
{
    public:
    int data; 
    Node *next; 
}*first=NULL;
void Create(int A[],int n)
{
    Node *t,*last; 
    first=new Node; 
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node; 
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }    
}
int Max(Node *p)
{
    int x=0;
    if(p==0)//base case 
    return INT_MIN;//once we've reached the null pointer, we assign x the minimum value. 
    // we do this cause during the first recursive call, function will return p->data to the previous call.
    x=Max(p->next);
    if(x>p->data)
    return x; 
    else 
    return p->data; 
}

int main()
{
    int n=6;
    int A[n]={5,12,18,2,7,1};
    Create(A,n);
    std::cout << Max(first) << std::endl;

}