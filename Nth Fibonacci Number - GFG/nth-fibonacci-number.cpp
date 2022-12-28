//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        vector<int> dp(n+1);
        int prev1 = 1;
        int prev2 = 0;
        for(int i = 2; i<=n; i++){
           int curr = (prev1%1000000007 + prev2%1000000007)%1000000007;
           prev2 = prev1%1000000007;
           prev1 = curr%1000000007;
        }
        return prev1%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends