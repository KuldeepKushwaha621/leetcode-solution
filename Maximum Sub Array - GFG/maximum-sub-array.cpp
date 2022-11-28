//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	   
	    int mxsum = 0, sum = 0;
	    int c = -1;
	    int b = 0;
	    int d = -1;
	    int j, i;
	    for(i =0, j= 0; i<n; i++){
	        if(a[i] < 0){
	           if(sum > mxsum){
	               mxsum = sum;
	               c = j;
	               d = i-1;
	           }
	           j = i+1;
	           sum = 0;
	        }
	        else{
	            sum += a[i];
	        }
	    }
	    if(sum > mxsum){
	        mxsum = sum;
	        c = j;
	        d = i-1;
	    }
	    if(c == -1){
	        return {-1};
	    }
	   vector<int> ans(a + c, a+d+1);
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends