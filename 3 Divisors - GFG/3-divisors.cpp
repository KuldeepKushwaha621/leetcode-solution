//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
bool isprime(int n){
    if(n==1 ){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}


int numberofdivisor(int n){
    int ans = 0;
    for(int i = 2; i*i<=n; i++){
        if(isprime(i))
        ans++;
    }
    return ans;
}
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        vector<int> ans;
        for(int i =0; i<q; i++){
           ans.push_back(numberofdivisor(query[i]));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends