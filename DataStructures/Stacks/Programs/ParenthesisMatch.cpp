#include <iostream>
#include <cstring>
//Parenthesis matching. 
using namespace std;
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
    void push(char x);
    char pop();
    char peek(int index);
    int isEmpty();
    int isFull();
};
Stack::Stack()//constructor
{
    top=NULL;
}
void Stack::push(char x)
{
    Node* t = new Node;
    if (t == nullptr)
    {
        std::cout << "Stack Overflow!" << std::endl;
    } 
    else
     {
        t->data = x;
        t->next = top;
        top = t;
    }
}
char Stack::pop()
{
    Node* p;
    char x = -1;
    if (top == nullptr){
        std::cout << "Stack Underflow!" << std::endl;
    } else {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}

int isBalanced(char *exp)
{
    Stack stk; 
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i] == '(')
        {
            stk.push(exp[i]);
        } 
        else if (exp[i] == ')')
        {
            if (stk.isEmpty())
            {
                return false;
            } else 
            {
                stk.pop();
            }
        }
    }
    return stk.isEmpty() ? true : false;
}
int Stack::isEmpty()
 {
    return top ? 0 : 1;
}
 
int main()
{
    char E[]="((a+b)*(c-d))";
    std::cout << isBalanced(E); 
}