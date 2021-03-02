// finding palindrome string

#include <bits/stdc++.h>
using namespace std;

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



int main() 
{
   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;   // created object ob for class Solution

   		cout << ob.isPlaindrome(s) << "\n"; //calling isPlaindrome from ob class
   	}

    return 0;
} 
