#include <iostream>
//we're using a class to make everything more streamlined. here every object on creation will have functions already made for it. 
class Stack
{
    private: 
    int size; 
    int top; 
    int *s;

    public: 
    Stack();
    void push(int val);
    int pop();
    int peek(int pos);
    int isFull();
    int isEmpty();
    int Stacktop();
    void Display();

};
Stack::Stack()
{
    std::cout << "enter size" <<std::endl;
    std::cin >> size;
    top=-1;
    s=new int[size]; 
}
void Stack::push(int val)
{
    if(top==size-1)
    std::cout << "stack overflow" << std::endl;
    else    s[++top]=val;

}
int Stack::pop()
{
    int x=-1; 
    if(top==-1)
    std::cout << "stack underflow" << std::endl;
    else    x= s[top--];
    return x; 
}
int Stack::peek(int pos)
{
    int x=-1;
    if(top-pos+1<0) 
    std::cout << "invalid position" << std::endl;
    else     x= s[top-pos+1];
    return x;
}
int Stack::isFull()
{
    if( top== size-1)
    return 1; 
    return 0; 
}
int Stack::isEmpty()
{
    if( top==-1)
    return 1; 
    return 0; 
}
int Stack::Stacktop()
{
    int x=-1; 
    if(!isEmpty())
    x= s[top];
    return x; 
}

void Stack::Display()
{
    for(int i=top;i>=0;i--)
    std::cout << s[i] << std::endl;
    std::cout << std::endl;
}
int main()
{   
    Stack obj1; 
    obj1.push(10);
    obj1.push(20);
    obj1.push(30);
    obj1.push(40);
    obj1.push(50);
    obj1.pop();
    obj1.Display();
}