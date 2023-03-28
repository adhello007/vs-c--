#include <iostream>
//it is there to calculate greatest common divisor of two numbers. 
int main()
{
    int num1=0, num2=0;//num 1= m , num2 = n 
    std::cin >> num1 >> num2; 
    int r=0; 
    while(num2!=0)
    {
        r=num1%num2; 
        num1=num2;
        num2=r;
    }
    std::cout << num1 << std::endl;
}