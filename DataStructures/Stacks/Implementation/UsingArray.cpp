#include <iostream>

class Stack 
{
    public:
    int size; 
    int top;//top keeps track of which index's value it is holding  
    int *s;//a pointer which will point to a heap memory array.
};
void Create(Stack *st)//stack gets its values
{
    std::cout << "enter size" <<std::endl;
    std::cin >> st->size;
    st->top=-1;
    st->s = new int[st->size];//created a dynamic array
}

void Display(Stack st)
{
    for(int i=st.top;i>=0;i--)
    std::cout << st.s[i] << " ";
    std::cout << std::endl;
}

void push(Stack *st,int x)//we insert a num in stack
{
    if(st->top==st->size-1)//we check if stack is already full
    std::cout << "stack overflow" << std::endl;
    else
    {
        st->top++;//we first increment the value of top 
        st->s[st->top]=x;//we then insert the value of x in it.
    }
}

int pop(Stack *st)//we are removing an int from the stack
{
    int x=-1; //this is its natural value
    if(st->top==-1)//checking if stack is empty 
    std::cout << "stack underflow" << std::endl;
    else
    {
        x=st->s[st->top--];//so we store the value of element in stack in
        // x and after that reduce the value of top by 1. 
    }
    return x; //we return the value of the int which we removed 
    //from the stack. IF x is -1 then stack is empty. 
}





int peek(Stack st,int pos)// we are looking at a number in stack.
{
    //position means the position from the top of the stack. 
    int x=-1; 
    if(st.top-pos+1<0)//checking if position exists or not in the stack
    std::cout << "invalid index" << std::endl;//this is the formula for converting the position to index number
    else
    x=st.s[st.top-pos+1];
    return x; 
}

int isEmpty(Stack st)//checking if the stack is empty
{
    if(st.top==-1)
    return 1; 
    return 0; 
}

int isFUll(Stack st)
{
    if(st.top==st.size-1)
    return 1;
    return 0;
}

int stackTop(Stack st)//retrieving the value of the top most value in the stack
{
    if(!isEmpty(st))//if it is NOT  empty is a true statement
    return st.s[st.top];
    return -1;
}

int main()
{
     Stack stek; //created an object of stack
    Create(&stek);//passed that5 object by ref

    push(&stek,10);//adding a number to the stack
    push(&stek, 20);
    push(&stek,30);
    push(&stek,40);
    push(&stek,50);

    //std::cout << pop(&stek) << std:5:endl;
      pop(&stek);
    Display(stek);
}