#include <iostream>
using namespace std; 
class TNode 
{
    public:
    TNode *lchild; 
    int data; 
    TNode *rchild; 

};
class Queue
{
    private: 
    int front, rear,size;
    TNode **Q;//we create an array which are of pointer variables so that they can point to the tnode trees. 
    public: 
    Queue();
    void enqueue(TNode **a);
    TNode * dequeue();
    bool isEmpty();
    bool isFull();
};
Queue::Queue()
{
    front=0,rear = 0;
    size = 100;
    Q = new TNode*[size];
}
void Queue::enqueue(TNode **a)
{
    if(isFull()) return;
    Q[++rear] = *a;
}
TNode * Queue::dequeue()
{
    TNode *q;
    if(isEmpty()) return NULL;
    q = Q[++front];
    return q; 
}

bool Queue::isEmpty()
{
    return (front==rear);
}
bool Queue::isFull()
{
    return (rear+1==size);
}
TNode * Create()
{
    int x; 
    Queue q;
    TNode *p;  
    TNode *root = new TNode ; 
    cout << "plaese enter root value " << endl; 
    cin >> root->data; 
    root->lchild = root->rchild=NULL; 

    q.enqueue(&root);

    while(!q.isEmpty())
    {
        p=q.dequeue();
        cout << "please enter the left child of " << p->data << " or -1" <<endl; 
        cin >> x; 

        if(x!=-1)
        {
            TNode *t=new TNode; 
            t->data = x; 
            t->lchild = t->rchild= NULL; 
            p->lchild=t; 
            q.enqueue(&t);
        }

        cout << "please enter the right child of " << p->data << " or -1" <<endl; 
        cin >> x; 

        if(x!=-1)
        {
            TNode *t=new TNode; 
            t->data = x; 
            t->lchild = t->rchild= NULL; 
            p->rchild=t; 
            q.enqueue(&t);
        }
    }
    return root; 
}
void PreOrder(TNode *p)
{
    if(p)
    {
        cout << p->data << endl; 
        PreOrder(p->lchild);
        PreOrder(p->rchild); 
    }
}
int main()
{
    TNode *root = Create();
    PreOrder(root);
}