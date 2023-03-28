#include <iostream>
#include <cstring>

// using namespace std; 
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

    char * infixToPosfix(char *infix);
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


int Precedence(char x)//check precedence
{
    if(x=='+' || x=='-')  return 1;
    else if(x=='*' || x=='/') return 2;
    return 0;
}
int isOperand(char x)//the input cannot have '(' ' )' as inputs. 
{
    if(x=='+' || x=='-' || x=='*' || x=='/' )//operator
    return false;
    else
    return true;
}
char * Stack::infixToPosfix(char *infix)
{ 
    int i=0,j=0;
    int length=strlen(infix);
    char *postfix=new char[length +2];//we do +2 inorder to make space for  \0 which is used at the end of a string and # char.

    while(infix[i]!='\0')
    {
        if(isOperand(infix[i])) postfix[j++]=infix[i++];
        else 
        {
            if(Precedence(infix[i])>Precedence(top->data)) push(infix[i++]);
            else postfix[j++]=pop();
        }
    }
    while(top!=NULL) postfix[j++] = pop();
    postfix[j]='\0';

    return postfix;
}

int main()
{
    Stack st;
     st.push('#');//we did this because an empty stack would give an error
    char infix[]="a+b*c-d/e";
    char *ans=st.infixToPosfix(infix);
    
    std::cout << ans;
}