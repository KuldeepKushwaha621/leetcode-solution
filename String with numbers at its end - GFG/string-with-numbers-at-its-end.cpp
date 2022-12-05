//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
		
int isSame(string s)
{
    int n = s.length();
    int j = 0;
    int ans = 0;
    int a = 1;

for(int i = n-1; i>=0; i--){
    if(s[i] >=48 && s[i] <=57){
       j++; 
       ans += a*(s[i]-48);
       a = a*10;
    }
}
//cout<<ans<<" "<<n-j;
 if(n-j == ans){
     return 1;
 }
return 0;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isSame(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends