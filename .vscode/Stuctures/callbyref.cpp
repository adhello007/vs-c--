#include <iostream>
struct Rectangle
{
    int length;
    int breadth;
} r;//i put r here which means that r is an object of struct rectangle. basically its another way of declaring a var 
//related to rectangle instead of putting 'Rectangle r;' in main. 
int area(Rectangle &r1)
{
    
    return r1.length*r1.breadth;
}
int main()
{
   // Rectangle r;
    r.length=10; 
    r.breadth=5;
    std::cout << area(r) << std::endl;

}
//sidde note ....this is not using address of r. 
/*
basically, the point is that lets say r is a variable of value = 10. 
now i want to give r itself another name. then i can use '&' operator. 
this means '&a' is another name for r. This is using reference and not address. 
thats why when in the above code we use 'area(r)', it is not giving an error when 
the parameter of the function has '&r1'.
*/