#include <iostream>
using namespace std; 
//This code works properly. 
//its a double ended queue
class Queue
{
    private: 
    int size; 
    int front; 
    int rear; 
    int *Q; 
    public: 
    Queue();
    void InsertFront(int x);
    void InsertLast(int x);
    int DeleteFront();
    int DeleteLast();
    bool isEmpty();
    bool isFull();
    void Display();
};
Queue::Queue()
{
    cin >> size; 
    front =-1,rear=-1;
    Q=new int[size];
    
}
void Queue::InsertFront(int x)//new function for DEqueue
{
    if(front==rear)
    {
        front=-1; 
        rear=-1;
        return;
    }
    if(front==-1)
    {
        cout << "cannot insert from front " << endl;
        return; 
    }
    
    Q[front--] = x;
    
}
void Queue::InsertLast(int x)
{
    if(isFull())
    {
        cout << "the queue is full,cannot insert from last "  << endl; 
        return;
    }
    if(front==rear)
    {
        front=-1; 
        rear=-1;
    }
    Q[++rear] = x;

}
int Queue::DeleteFront()
{
    if(isEmpty())
    {
        cout << "cannot delete from front, queue is empty" << endl; 
        return -1;  
    }
    int x = Q[++front];
    return x; 
}
int Queue::DeleteLast()//new function for DEqueue
{
    if(isEmpty())
    {
        cout << "cannot delete from last, queue is empty" << endl; 
        return -1; 
    }
    int x = Q[rear--];
    return x; 
}
bool Queue::isEmpty()
{
    return (front==rear);
}
bool Queue::isFull()
{
    return ((rear+1)==size && front==-1);
}
void Queue::Display()
{
    if(front==rear) 
    {
        cout << "queue is empty according to display" << endl;
        return;
    }
    for(int i=front+1;i<=rear;i++)
    cout << Q[i] << " ";
    cout << endl; 
}
int main()
{
    Queue q1; 
    q1.InsertLast(10);
    q1.InsertLast(20);
    q1.InsertLast(30);
    q1.InsertLast(40);
    q1.DeleteFront();
    q1.DeleteFront();
    q1.DeleteFront();
    q1.DeleteFront();
    q1.InsertLast(60);
    q1.InsertFront(10);
    q1.Display();
}