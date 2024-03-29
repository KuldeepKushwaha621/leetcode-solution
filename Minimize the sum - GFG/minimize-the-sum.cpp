//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        int sum = 0;
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<N; i++){
            pq.push(arr[i]);
        }
        while(pq.size()>1){
            int k1 = pq.top();
            pq.pop();
            int k2 = pq.top();
            pq.pop();
            int k = k1 + k2;
            sum += k;
            if(pq.empty()){
                break;
            }
            pq.push(k);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends