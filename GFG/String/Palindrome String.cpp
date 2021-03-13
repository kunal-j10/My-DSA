#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
	int i=0;
	int j=s.length()-1;

	while(i<j)
	{
		if(s[i]==s[j])
		{
			i++;
			j--;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int main()
{
	string s;
	cin>>s;

	cout<<isPalindrome(s);
	return 0;
}