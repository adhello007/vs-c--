#include <iostream>

struct Person //structure is a way to group similar or dissimilar datatypes together. 
{
    std::string name;
    int age; 
    float salary; 
};
void Print(Person p);
int main()
{   
    Person p; 
    std::cin >> p.name >> p.age >> p.salary; 
    Print(p);
}
void Print(Person p)
{
    std::cout << p.name << " " << p.age << " " << p.salary;
}