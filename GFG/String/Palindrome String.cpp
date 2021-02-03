#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    string S1="";
	    string S2="";
	    int n = S.length();
	    
	    if(n%2==0)
	    {
	    for(int i=0;i<n/2;i++)
	    {
	        S1=S1+S[i];
	    }
	    for(int i=n/2;i<n;i++)
	    {
	        S2=S2+S[i];
	    }
	    }
	    else
	    {
	       for(int i=0;i<n/2;i++)
	       {
	        S1=S1+S[i];
	       }
	       for(int i=n/2+1;i<n;i++)
	       {
	        S2=S2+S[i];
	       }
	    }
	    reverse(S2.begin(),S2.end());
	    if(S1==S2)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends