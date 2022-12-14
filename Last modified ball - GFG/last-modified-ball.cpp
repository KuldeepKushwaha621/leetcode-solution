//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int solve(int n, vector<int> a) {
        // code here
        int i;
        for(i=n-1; i>=0; i--){
            if(a[i] < 9){
                break;
            }
        }
        if(i==0 && a[i] == 9){
            return 0;
        }
        else{
            return i+1;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.solve(N, A) << "\n";
    }
    return 0;
}
    
// } Driver Code Ends