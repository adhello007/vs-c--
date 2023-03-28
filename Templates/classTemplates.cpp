#include <iostream>
using namespace std; 

template <typename T> class Array 
{
    private: 
    T *ptr;
    int size; 
    public: 
    Array(T arr[],int n);
    void Print();
};
template <typename T> Array<T>::Array(T arr[],int n)//constructor
{
    ptr=new T[n];
    size=n;

    for(int i=0;i<size;i++)
    ptr[i]=arr[i];
}
template <typename T> void Array<T>::Print()
{
    for(int i=0;i<size;i++)
    cout << ptr[i] << " ";
    cout << endl;
}
int main()
{
    int A[]={1,3,5,7,9,11};
    float B[]={3.4,5.6,9.1,11.6,15.9};

    int s = {sizeof(A)/sizeof(A[0])};
    int s1=sizeof(B)/sizeof(B[0]);

    Array<int> a(A,s);
    Array<float> a1(B,s1);
    a.Print();

    a1.Print();
}
