#include <iostream>
#include <cstring>
using namespace std; //array implementation 

class Stack 
{
    private: 
    int size; 
    int top; 
    char *s;
    public: 
    Stack(int x);
    void push(char x);
    char pop();
    
    char * infixtoPostfix(char *infix);

};
Stack::Stack(int x)
{
    s=new char[x+1];
    int size = x;
    int top =-1;   
}
void Stack::push(char x)
{
    if(top==size-1)
    cout << "stack overflow" << endl; 
    top++; 
    s[top] = x;
}
char Stack::pop()
{
    char x; 
    if(top==-1)
    cout << "stack underflow" <<endl;
    x = s[top--];
    return x; 
}

int Pre(char x)
{
    if(x=='+' || x=='-') return 1; 
    if(x=='*' || x=='/') return 2;
    return 0;
}
int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/') return 0; 
    return 1;
}
char * Stack::infixtoPostfix(char *infix)
{
    int i=0,j=0; 
    int length = strlen(infix);
    char *postfix = new char[length+2];
    
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i])) postfix[j++] = infix[i++];
        else 
        {
            if(Pre(infix[i])>Pre(s[top])) push(infix[i++]);
            else 
            {
                postfix[j++] = pop();
            }
        }
    }
    while(top!=0)
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
    return postfix;

}
int main()
{
    char exp[] = "a+b-c*d/e";
    int size = strlen(exp);
    Stack st(size);
   // st.push('#');
    char *posfix = st.infixtoPostfix(exp);
    cout << posfix << endl;
    
}