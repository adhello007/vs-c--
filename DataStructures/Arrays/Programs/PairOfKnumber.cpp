#include <iostream>
int SmallerNumbers(int A[],int input,int n)
{
    int count=0; 
    for(int i=0;i<n;i++)
        if(A[i]<=input)
        count++;
        //counted number of numbers smaller or equal to input 

    int temp[count];//made an array of that size 
    int j=0;
    for(int i=0;i<n;i++)
        if(A[i]<=input)
        temp[j++]=A[i];//stored smaller numbers in temp array 

    for(int i=0;i<count;i++)
    A[i]=temp[i];
    return count; 
}
//1
void Merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int temp[h+1];
    while(i<=mid && j<=h)
    {
        if(A[i]<=A[j])
        temp[k++]=A[i++];
        if(A[j]<=A[i])
        temp[k++]=A[j++];
    }
    for(;i<=mid;i++)
    temp[k++]=A[i];
    for(;j<=h;j++)
    temp[k++]=A[j];

    for(i=l;i<=h;i++)
    A[i]=temp[i];
}
void MergeSort(int A[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid=(l+h)/2;
        MergeSort(A,l,mid);//we are dividing the list into smaller and smaller pieces till it reaches 
        //one list per element.
        MergeSort(A,mid+1,h); 
        Merge(A,l,mid,h);
    }
    
}
//1
//2 
int Binary(int A[],int l,int h,int key)
{
    int mid=0; 
    if(l==h)
    {
        if(key==A[l])
            return l+1;
        else 
        return 0;
    }
    else 
    {
        mid=(l+h)/2;
        if(key==A[mid])
        return mid; 
        else if(key<A[mid])
        return Binary(A,l,mid-1,key);
        else 
        return Binary(A,mid+1,h,key);
    }
}
//2
void Find(int A[],int n,int input)
{
    for(int i=0;i<n;i++)
    {
        int num1=A[i];
        int num2=input-num1;
        if(Binary(A,i+1,n-1,num2))
        std::cout << num1 << "," << num2 << std::endl;

    }
}
int main()
{
    int n; 
    std::cin >> n; 
    int A[n];
 //6 3 8 5 7 2 1 0 4 
    for(int& x:A)
    std::cin >> x; 

    int input; 
    std::cin >> input;

    int count=SmallerNumbers(A,input,n);
    MergeSort(A,0,count-1);
    Find(A,count,input);

}