#include <iostream>
//https://www.udemy.com/course/datastructurescncpp/learn/lecture/13133058#questions
class Node
{
    public: 
    int data; 
    Node *next; 
}*first=NULL;

void Create(int A[],int n)
{
    int i; 
   
    Node *t,*last; 
     first=new Node; 
    first->data=A[0];//first data of array is stored in the head 
    first->next=NULL;
    last=first;//last pointer pointing on first.  

    for(i=1;i<n;i++)
    {
        t=new Node; 
        t->data =A[i];
        t->next=NULL;//we are making this null as we will be connecting it to another node later. 
        last->next = t;
        /*above line is VERY IMP because before this, t is a random linked node in heap memory not connected to the first node. 
        since, last pointer was pointing to first node in line 18, we take the addresss of last which is last->next and
        make it point to t which means now it is now connected to first node.*/
        last=t; //here, we are updating the last nodes address as it is now t node. 
    }

}
void Display(Node *p)
{ 
    while(p!=NULL)
    {
        std::cout << p->data << std::endl; 
        p=p->next; 
    }
}
int main()
{
    int n=5; 
    int A[n]={2,4,6,8,10};
    
    Create(A,n);
    Display(first);
}