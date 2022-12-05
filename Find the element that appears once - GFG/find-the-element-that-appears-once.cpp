//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int n){
	    //code
	    if(n==1){
	        return a[0];
	    }
	    for(int i=1; i<n-1; i++){
	        if(a[i] != a[i+1] && a[i] != a[i-1])
	        return a[i];
	    }
	    if(a[0] != a[1]){
	        return a[0];
	    }
	    return a[n-1];
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends