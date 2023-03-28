#include <iostream>
/*
https://www.geeksforgeeks.org/swap-nodes-in-a-linked-list-without-swapping-data/


here, we input two numbers in the nodes which are to be swapped. 
Now we dont know if the numbers are positioned side by side/ if one is the head node, 
and/or if theyre side by side AND one of them is a head node.
*/
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

bool Search(Node *p,int x,int y)//we search the list to see if the elements we input are present in the list or not
{
    int ans=0;
    while(p)
    {
        if(p->data == x || p->data ==y) ans++;
        p=p->next;
    }
    if(ans==2)
    return true; 
    return false;
}
int CheckIfHead(Node *p)
//this function checks whether or not the first element input is at the head position or not
{
    if(p==first) return 1;
    return 0;
}
int SideBySide(Node *p,Node *q)
/*
side by side function checks if the elements input are next to each other or not.
*/
{
    if(p->next==q)
    return 1;
    return 0;
}
void Position(Node *head,int x,int y)
{
    Node *p=head,*prev_p=NULL;// we take a pointer 'prev' which will help in reaching nodes before the positions of x and y.
    Node *q=head,*prev_q=NULL; 
    while(p->data!=x)//we are making p and prev-p point to the correct locations, i.e, the node where x is present and the node 
    //before that by prev-p.
    {
        prev_p=p;
        p=p->next;
    }
    while(q->data!=y)//we are making q and prev-q point to the correct locations, i.e, the node where y is present and teh node 
    //before that by prev-q.
    {
        prev_q=q;
        q=q->next;
    }
    
    if(CheckIfHead(p) && SideBySide(p,q)==false)//if p is a head node and p and q are not side by side
    {
        Node *last=q->next;
        q->next=p->next;
        p->next=last;
        prev_q->next=p;
        first = q; 
    }
    else if(CheckIfHead(p) && SideBySide(p,q))//if p is a head node and p and q are side by side.
    {
        Node *last=q->next;
        q->next=p;
        p->next=last;
        first=q;
    }
    else//P is NOT a head node. //we do NOT worry whether q is last or not because it has the same procedure.  
    {
        if(SideBySide(p,q)==false)//if p and q are not side by side
        {
            Node *last;
            prev_p->next=q;
            last=q->next;
            q->next=p->next;
            prev_q->next=p;
            p->next=last;
        }
        else//p and q are side by side. 
        {
            Node *last;
            prev_p->next=q;
            last=q->next;
            q->next=p;
            p->next=last;
        }
    }

}
void Display(Node *p)
{
    while(p)
    {
        std::cout << p->data << std::endl;
        p=p->next;
    }
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

    int a,b; 
    std::cin >>a>>b;
    
    if(Search(first,a,b))//if BOTH the elements we input are present in the list.
    {
        Position(first,a,b);
        std::cout << "-------------" <<std::endl;
        Display(first);
    }
    
    else
    std::cout << "keys not present in the list" << std::endl;

}