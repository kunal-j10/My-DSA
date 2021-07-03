/****************************************************************************** 
Codechef Problem Code :- MVALUE 
 
Problem statement:- 
Given an array A of size N. Find the maximum value of the 
expression a∗b+a−b where a and b are 2 distinct elements of the array. 
 
Eg:- if we have an array ={2,3,5} 
     then the expression     a*b+a-b 
     will have max value only if   a=5 and b=3. 
     therefore, ans is 17. 
*******************************************************************************/ 
#include <iostream>  
using namespace std; 
 
 
long long int ans(long int a,long int b)
{
    long long int x= (a*b)+ abs(a-b);
    return x;
}

int main() {
	
	int T;
	cin>>T;
	for(int m=0;m<T;m++)
	{
	    long int n;
	    cin>>n;
	    long int arr[n];
	    for(long int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    long long int mx1=ans(arr[n-1],arr[n-2]);
	    long long int mx2=ans(arr[0],arr[1]);
	    long long int mx3=ans(arr[n-1],arr[0]);
	    cout<<max({mx1,mx2,mx3})<<endl;
	}
	return 0;
}

 
 