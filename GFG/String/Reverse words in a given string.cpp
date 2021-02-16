/******************************************************************************

 given input string       = i.like.this.program.very.much
 #task:-
 printing output string   = much.very.program.this.like.i

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string S) 
{                          // finding no. of '.' so that we 
    int n = S.length();    // can find no. of words
    int count =0;
    for(int i=0;i<n;i++)
    {
        if(S[i]=='.')
        {
            count++;
        }
    }
    int t=count+1;        // No. of words = no. of dots +1
    string srr[count+1]; //  creting string array to store words
    string S1="";
    for(int i=0;i<=n;i++)
    {
        if(S[i]=='.'||i==n)
        {
           srr[count]=S1;    // storing words in string array
           count=count-1;
           S1="";
        }
        else
        {
            S1=S1+S[i];
        }
    }
    
    string str="";
    for(int i=0;i<=t;i++)    // storing final output sentence in string str
    {
        if(i==t-1)
        {
            str=str+srr[i];
            break;
        }
        str=str+srr[i]+".";
    }
    
    
    return str;       // returning final string str to main function
} 

int main() 
{
    int t;
    cin >> t;    // no.of test cases
    while (t--) 
    {
        string s;
        cin >> s;    // taking string s as input
        cout<<reverseWords(s)<<endl;   // calling function reverseWords and printing output
    }
}
