#include <iostream>
/*this is an OPTIMIZED code for segregation of positive and negative integers with relative order same. Also, time comp is On
and space comp is On. 

Rotation is time consuming and cannot be used again and again. So, we used temp arrays for positive and negative and then 
re-imposed it on the original array. 

*/
using namespace std; 

int main()
{
    int n; 
    cin >> n; 
    int A[n];

    for(int& x:A)
    cin >> x; 

        int i=0;
	    int p=0,ni=0;
	    while(i<n)
	    {
	        if(A[i]>=0)
	        {
	            p++;
	            i++;
	        }
	        
	        else
	        {
	            i++;
	            ni++;
	        }
	        
	    }
	    int pos[p];
	    int neg[ni];
	    
	    i=0;
	    int a=0,b=0;
	    while(i<n)
	    {
	        if(A[i]>=0)
	        {
	            pos[a++]=A[i];
	            i++;
	        }
	        else
	        {
	            neg[b++]=A[i];
	            i++;
	        }
	        
	    }
	    i=0;
        int t; 
        a =0; 
        if(ni<=p) t=ni; 
        else t=p; 

        while(i<n)
        {
            if(a<t)
            {
                A[i++]=pos[a];
                A[i++]=neg[a++];
            }
            else
            {
                if(t==ni && ni!=p)
                A[i++]=pos[a++];
                else if(t==p && ni!=p)
                A[i++]=neg[a++];
            }
        }
        for(int i=0;i<n;i++) cout << A[i] << " ";

}