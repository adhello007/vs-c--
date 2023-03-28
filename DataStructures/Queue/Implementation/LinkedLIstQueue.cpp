#include <iostream>
using namespace std; 
//here no size is given. 
class Node 
{
    public: 
    int val; 
    Node *next; 
};
class Queue
{
    private: 
    Node *front=NULL; 
    Node *rear = NULL; 
    public: 
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    bool isFull(Node *t);
    void Display();
};
void Queue::enqueue(int x)
{
    Node *t=new Node; 
    if(isFull(t)) 
    {
        cout << "heap is full, cannot enter more" << endl; 
        return; 
    }
    t->val=x; 
    t->next =NULL; 
    if(front==NULL)
    {
        front=rear=t; 
    }
    else 
    {
        rear->next = t; 
        rear=t; 
    }

}
int Queue::dequeue()
{
    if(isEmpty())
    {
        cout << "queue is empty mate " << endl;
        return -1; 
    }
    Node *p=front; 
    if(front->next)front=front->next;
    else front=NULL;
    int x = p->val; 
    delete p; 
    p=NULL;
    return x;
}
bool Queue::isEmpty()
{
    return (front==NULL);
}
bool Queue::isFull(Node *t)
{
    return (t==NULL);
}
void Queue::Display()
{
    while(front)
    {
        cout << front->val << " ";
        front=front->next; 
    }
    cout << endl;
}
int main()
{
    Queue q1; 
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(50);
    q1.Display();
}