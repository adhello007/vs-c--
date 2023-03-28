#include <iostream>
//Here we are using a class of stack where all the functions are defined. since we are using 
//an Object of Stack, we dont need to provide reference to the head pointer in the parameter as an object 
//created is a way of having a reference to any top pointer of any linked stack list. 
using namespace std; 
class Node 
{
    public: 
    int data; 
    Node *next;
};
class Stack
{
    private: 
    Node *top;
    public: 
    Stack();//constructor
    void push(int value);
    int pop();
    int peek(int pos);
    void isFull();  
    Node * getTop();//this returns the value of top as top is a private variable.
};
Stack::Stack()
{
    top=NULL;
}
void Stack::push(int value)
{
    Node *t=new Node;
    if(t==NULL)
    std::cout << "heap is full, stack overflow" << std::endl;
    else
    {
        t->data=value;
        t->next=top;
        top=t;
    }
}
int Stack::pop()
{
    Node *p=top;
    int x=-1; 
    if(top==NULL) cout << "stack underflow" << endl; 
    x = top->data;
    top=top->next;
    delete p; 
    p=NULL; 
    return x;  
}
int Stack::peek(int pos)
{   
    Node *p=top;

    if(top==NULL)
    std::cout << "stack is empty" << std::endl;
    
    for(int i=0;i<pos-1 && p!=NULL;i++)  p=p->next;
    if(p)
    return p->data;
    else
    return -1;   
}
Node * Stack::getTop()
{
    Node *p=top;//Always give  a replica of the private variables in return statement and not the original variabless themselves.
    return p;
}
void Display(Stack st)//we dont need a pointer since we need call by value.
{
    Node *p=st.getTop();
    while(p)
    {
        std::cout << p->data << " ";
        p=p->next;
    }   
    std::cout << std::endl;

}
int main()
{
    Stack st1;
    Stack st2;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st1.push(50); 


    st2.push(2);
    st2.push(4);
    st2.push(6);
    st2.push(8);
    st2.push(10);
    st2.pop();

    Display(st1);
    Display(st2);


}