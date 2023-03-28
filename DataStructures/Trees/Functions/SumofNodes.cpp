//no of nodes in a treee 
#include <iostream>
using namespace std; 
class TNode 
{
    public: 
    TNode *lchild; 
    int data; 
    TNode *rchlid; 
};
class Node 
{
    public:
    TNode *val;//pointer which stores the address of the tree node  
    Node *next; 
};
class Queue
{
    private: 
    Node *front=NULL; 
    Node *rear =NULL; 
    public: 
    void enqueue(TNode **a);
    TNode * dequeue();
    bool isEmpty();
    bool isFull(Node *t);
};
void Queue::enqueue(TNode **a)
{
    Node *t=new Node; 
    t->val = *a; 
    t->next = NULL; 
    
    if(isFull(t)) return; 
    
    if(isEmpty())
    {
        front=rear=t; 
    }
    else 
    {
        rear->next=t;
        rear=t;
    }
}
TNode * Queue::dequeue()
{
    Node *p=front;
    TNode *q=p->val;
    if(isEmpty()) return NULL;
    if(front->next) front=front->next;
    else front=NULL; 
    delete p;
    p=NULL; 
    return q;
}
bool Queue::isEmpty()
{
    return (front==NULL);
}
bool Queue::isFull(Node *t)
{
    return (t==NULL);
}
TNode * Create()
{
    int x; 
    Queue q; 
    TNode *t,*p;
    TNode *root = new TNode; 
    root->lchild=root->rchlid=NULL;
    
    cout << "enter root's value" << endl; 
    cin >> root->data;
    q.enqueue(&root);

    while(!q.isEmpty())
    {
        p=q.dequeue();
        cout << "please enter left child of " << p->data << " or -1 to exit" << endl; 
        cin >> x; 

        if(x!=-1)
        {
            TNode *t=new TNode; 
            t->data=x; 
            t->lchild=t->rchlid=NULL; 
            p->lchild=t; 
            q.enqueue(&t);
        }

        cout << "please enter right child of " << p->data << " or -1 to exit" << endl; 
        cin >> x; 

        if(x!=-1)
        {
            TNode *t=new TNode; 
            t->data=x; 
            t->lchild=t->rchlid=NULL; 
            p->rchlid=t; 
            q.enqueue(&t);
        }
        
    }
    return root; 
}
int Count(TNode *p)
{
    int x,y; 
    if(p)
    {
        x= Count(p->lchild);
        y = Count(p->rchlid);
        return x+y+p->data;

    }
    return 0;
}
int main()
{
    TNode *root = Create();
    cout << Count(root);
}

