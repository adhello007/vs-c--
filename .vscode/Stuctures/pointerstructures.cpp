#include <iostream>
struct Rectangle
{
    int l; 
    int b;
};
int main()
{
    Rectangle *p=new Rectangle;//rectangle structure is created in heap memory. this is called dynamic allocation
    p->l=10;
    std::cout << p->l;
}