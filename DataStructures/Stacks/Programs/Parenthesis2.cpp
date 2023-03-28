#include <iostream>
#include <cstring>
class Node 
{
    public: 
    char data; 
    Node *next;
};
class Stack
{   
    private: 
    Node *top;
    public: 
    Stack();
    void push(char val);
    char pop();
    int isEmpty();
};
Stack::Stack()
{
    top=NULL;
}
void Stack::push(char val)
{
    Node *t=new Node; 
    if(t==NULL)
    std::cout << "stack overflow, heap is full" << std::endl;
    else
    {
        t->data=val;
        t->next=top;
        top=t;
    }
}
char Stack::pop()
{
    Node *p;
    char x=-1;
    if(top==NULL)
    std::cout << "stack empty" << std::endl;
    else
    {
        p=top;
        x=p->data;
        top=top->next;
        delete p;
    }
    return x;
}

int isMatching(char *e)
{
    Stack st; 
    for(int i=0;i<strlen(e);i++)
    {
        if(e[i] == '[' || e[i] == '{' || e[i] == '(')
        {
            st.push(e[i]);
        }
        else if(e[i] == ']' || e[i] == '}' || e[i] == ')')
        {
            char x=-1;
            x=st.pop();
            if(x=='(' && e[i]!=')')    return 0;
            if(x=='{' && e[i]!='}')    return 0;
            if(x=='[' && e[i]!=']')    return 0;
            return 1;    
        }
    }
    return st.isEmpty() ? true : false;
}
int Stack::isEmpty()
{
    return top ? 0 : 1;
}
int main()
{
    char E[]="[({a+b)+(c-d)}]";
    if(isMatching(E)) std::cout << "Correctly Parenthesized" << std::endl;
    else std::cout << "incorrectly parenthesized" << std::endl;
}
