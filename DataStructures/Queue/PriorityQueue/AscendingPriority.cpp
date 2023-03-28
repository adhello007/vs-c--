#include <iostream>
using namespace std; 
//This is a very basic but Correct implementation of an Ascending priority queue. 
//this code is written only understanding the concept as the code changes with the given problem. 
//here we have arbitrarily inserted the numbers in the queue and 
//we will search for the HP element. Then we'll remove it and shift the array. 
class Queue
{
    private:
    int size; 
    int rear; 
    int *Q;
    public: 
    Queue();
    void Insert(int x);
    int Search();
    void Rearrange(int front);
    void PriorityDequeue(int d);
    void Display();
};
Queue::Queue()
{
    cin >> size; 
    rear=-1; 
    Q=new int[size];
}
void Queue::Insert(int x)
{   
    if((rear+1)==size)
    {
        cout << "queue is fulll my boi my boi my boi" << endl; 
        return; 
    }
    Q[++rear]=x;
}
int Queue::Search()//searchign for  the smallest element AKA highest priority 
{
    int min=INT_MAX;
    int pos =0;
    int front=0;
    while(front!=rear)
    {
        if(Q[front]<min) 
        {
            min=Q[front];
            pos=front;
        }
        front++;
    }
    return pos;
}
void Queue::Rearrange(int front)//rearrange the array by shifting it. O(n) is the worst case.
{
    while(front!=rear)
    {
        Q[front]= Q[front+1];
        front++;
    }
    rear--;
}
void Queue::PriorityDequeue(int d)//returning the value of priority.
{
    cout << Q[d] << " ";
}
void Queue::Display()
{
    for(int i=0;i<=rear;i++)
    cout << Q[i] << " ";
    cout << endl; 

}
int main()
{
    Queue q1; 
    q1.Insert(6);
    q1.Insert(8);
    q1.Insert(2);
    q1.Insert(3);
    q1.Insert(4);
    q1.Insert(1);
    q1.Insert(12);
    q1.Insert(19);
    int pos= q1.Search();
    q1.PriorityDequeue(pos);
    q1.Rearrange(pos);

    pos= q1.Search();
    q1.PriorityDequeue(pos);
    q1.Rearrange(pos);
    cout << endl;
    q1.Display();

}