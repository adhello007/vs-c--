#include <iostream>
//this is a very important and interesting problem that is 
//testing the recursive methods. 
//refer to notes and the video. 
void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        std::cout << a << "," << c << std::endl;
        TOH(n-1,b,a,c);
        
    }
   
}
int main()
{   
    int n; 
    std::cin >> n; 
    TOH(n,1,2,3);//3 towers are there. 
}