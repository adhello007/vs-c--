#include <iostream>
//how to increase the size of an array
int main()
{
    int *p = new int[5];//created an array in heap memory 
    for(int i=0;i<5;i++)
    std::cin >> p[i]; 

    int *q=new int[10];//created another array of length 10 in heap 

    for(int i=0;i<5;i++)
    q[i]=p[i];//transfer all items of p array to q array.

    delete []p;//we deleted the array p 
    p=q;//we make p point to where q was pointing 

    q=nullptr;//now we make the pointer q not point anywhere. 

    //for(int i=5;i<10;i++)
   // std::cin >> p[i];

    int x; 
    x=sizeof(p);
    for(int i=0;i<10;i++)
    std::cout << p[i] << " ";


    std::cout << std::endl;
    std::cout << x; 
}