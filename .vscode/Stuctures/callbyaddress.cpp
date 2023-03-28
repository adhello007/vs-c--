#include <iostream>
struct Rectangle
{
    int length;
    int breadth; 
};
void ChangeLength(Rectangle *r1,int l)
{
    r1->length=l;
}
int Area(Rectangle *r2)
{
    return r2->length*r2->breadth;
}
int main()
{
    Rectangle r={10, 5};
    ChangeLength(&r,4);//pass the address of r 
    std::cout << Area(&r);
}