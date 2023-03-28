#include <iostream>
using namespace std; 
/*this program finds the minimum number of swaps in an array, required to group the numbers lesser than 'k' together
 in the array.
 Also called the Sliding window methood
 
 https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/

 solution: https://www.youtube.com/watch?v=uUeZPQG-bPQ
  */

int main()
{
    int n; 
    cin >> n; 
    int arr[n];

    for(int& x:arr)
    cin >> x; 

    int k; 
    cin >> k; 


     int c=0; //this has the size of the window
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k) c++;
        }
        
        int count=0; //this is the number of numbers greater than k in a particular window cause they woudl need to be swapped. so it stores the num
        //of swaps required to group numbers together.
        for(int i=0;i<c;i++) 
        {
            if(arr[i]>k) count++;
        }//this was assessing the first window

        //from here we just look at the new number entering the window upon sliding and the number leaving the window upon sliding.
        int i=0,ans=count;
        for(int j=c;j<n;j++)
        {
            if(arr[i]>k) 
            {
                count--; 
                
            }
            if(arr[j]>k) 
            {
                count++;
                
            }
            i++;
            if(count<ans) ans=count;
        }
        return ans; 
}   


