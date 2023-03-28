// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int MaxIndex(float A[],int n)
    {
        int pos;
        float max=A[0];
        for(int i=1;i<n;i++)
        {
            if(A[i]>max)
            {
                max=A[i];
                pos=i;
            }
            
        }
        return pos; 
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        float ans[n];
        int k=0;
        float calc=0;
        
        for(int i=0;i<n;i++)
        {
            float n1=val[i];
            float n2=wt[i];
            calc=n1/n2;
            ans[k++]=calc;
        }//storing val/wt in another array. 
        
        int sum=0;
        int M=INT_MAX;
        int max_i=MaxIndex(ans,n);
        for(int i=1;i<n;i++)
        {
            
            while(wt[max_i]<=W&& wt[max_i]<=M)
            {
                sum+=val[max_i];
                M=W-wt[max_i];
                ans[max_i]=-1;
                max_i=MaxIndex(ans,n);
             }
            ans[max_i]=-1;
            max_i=MaxIndex(ans,n);
        }
        if(sum)
        return sum;
        else 
        return 0;
        //solution 
        
        
     
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        if(ob.knapSack(w, wt, val, n))
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        else 
        cout << 0 << endl;
    }
	return 0;
}  // } Driver Code Ends