#include <iostream>
using namespace std; 

/**
 * this method has 2 drawbacks: 
 * 1. you cannot reuse the spaces of the deleted integers. 
 * meaning that front will keep moving forward after deletion so 
 * we cannot use those spaces again until we reset the front and rear to -1.
 * 
 * 2. if f==r at the end of the array, it is going to say its full 
 * but we know that the entire array is empty. so the queue is 
 * full and empty at the same time. 
 * 
 * 
 * SOLUTION: for point 2, the solution is to reset the pointers. the moment f==r, reset them .
 *              
 *             To tackle point 1, we use circular array which is the standard application of queue using array 
 *              without any drawbacks in the given size/ 
 */



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
    front=-1,rear=-1; 
    Q=new int[size];
}
void Queue::enqueue(int x)
{
    if(front==rear)
    {
        front=-1; 
        rear=-1; 
    }

    if(isFull())
    {
        cout << "queue is full bro" << endl;
        return; 
    }
    
    
    rear++; 
    Q[rear]=x;
}
int Queue::dequeue()
{
    if(isEmpty())
    {
        cout << "queue is empty" <<endl; 
        return -1; 
    }
    front++; 
    int x=Q[front];
    return x; 
}
bool Queue::isEmpty()
{
    return (front==rear);
}
bool Queue::isFull()
{
    return ((rear+1)==size);
}
void Queue::Display()
{
    for(int i=front+1;i<=rear;i++)
    {
        cout << Q[i] << " ";
    }
    cout << endl; 

}
int main()
{   
    Queue q1; 
    q1.enqueue(10);
    q1.enqueue(20);
     q1.enqueue(30);
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(40);
    q1.Display();

}