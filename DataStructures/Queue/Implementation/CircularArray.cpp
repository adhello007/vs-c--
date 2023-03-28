#include <iostream>
using namespace std; 

class Queue
{
    private: 
    int size; 
    int front; 
    int rear; 
    int *Q;
    public: 
    Queue();
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    bool isFull();
    void Display();
};
Queue::Queue()
{
    cin >> size;
    size++; 
    front=0;rear=0; 
    Q=new int[size];
}
void Queue::enqueue(int x)
{
    if(isFull())
    {
        cout << "queue is full" << endl; 
        return;
    }
    rear=(rear+1)%size;
    Q[rear]=x;
}
int Queue::dequeue()
{
    if(isEmpty())
    {
        cout << "queue is empty" << endl; 
        return -1; 
    }
    front=(front+1)%size; 
    int x = Q[front];
    return x; 

}
bool Queue::isEmpty()
{
    return (front==rear);
}
bool Queue::isFull()
{
    return ((rear+1)%size==front);
}
void Queue::Display()
{
    if(front==rear) cout << "display says queue is empty " << endl;

        int i=front+1;
        while(i!=front)
        {
            
            cout << Q[i] << " ";
            if(i==rear)
            break;
            i=(i+1)%size;
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
    q1.enqueue(50);
    q1.enqueue(60);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(70);
    q1.enqueue(80);
    q1.Display();
    

}