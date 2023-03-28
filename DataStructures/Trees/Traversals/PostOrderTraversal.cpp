#include <iostream>
#include <stack>
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

void PostOrder(TNode *root)
{
    stack<TNode*> st1, st2;
    st1.push(root);
    while (!st1.empty()) 
    {
        TNode* curr = st1.top();
        st1.pop();
        st2.push(curr);
        if (curr->lchild) st1.push(curr->lchild);
        if (curr->rchlid) st1.push(curr->rchlid);
    }
    while (!st2.empty()) 
    {
        TNode* curr = st2.top();
        cout << curr->data << " ";
        st2.pop();
    }
}
int main()
{
    TNode *root = Create();
    PostOrder(root);
}

