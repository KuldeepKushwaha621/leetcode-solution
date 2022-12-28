//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int solve(long long int n, vector<int>&dp){
      if(n==0){
          return 0;
      }
      if(n==1){
          return 1;
      }
      if(dp[n] != -1){
          return dp[n]%1000000007;
      }
      dp[n] = solve(n-1, dp)%1000000007 + solve(n-2, dp)%1000000007;
      return dp[n]%1000000007;
  }
    long long int nthFibonacci(long long int n){
        // code here
        vector<int> dp(n+1, -1);
        solve(n, dp);
        return dp[n]%1000000007;
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