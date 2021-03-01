/****************************************************************************** 

    Codechef Problem Code :- COLGLF2  {college life 2} 
this Problem [COLGLF2] was asked in codechef starters feb. 2021 {Rated Contest for Div.3}
    
*******************************************************************************/ 
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int T;
	cin>>T;   //taking input for no. of test case
	for(int m=0;m<T;m++)   // considering each test case
	{
	    long int s;
	    cin>>s;       //no. of seasions
	    long int qrr[s];   // qrr[i] denotes duration of intro music of i-th season 
	    for(int i=0;i<s;i++)
	    {
	        
	        cin>>qrr[i];
	    }
	    long long int totalSum=0;
	    long int* arr[s];     
	    for(int i=0;i<s;i++)
	    {
	        long int n;
	        cin>>n;  // n is no. of episode in a perticular season 
	        arr[i]=(long int* )malloc(n*sizeof(long int));
	        long long int sum=0;
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[i][j];   // arr[i][j] denotes length of j-th episode in i-th season
	            sum=sum+arr[i][j];
	        }

	        sum=sum-(n-1)*qrr[i];
	        totalSum=totalSum+sum;
	        free(arr[i]);

	    }
	    cout<<totalSum;   //printing result
	    if(m!=T-1)
	       cout<<"\n";
	    
	}
	return 0;
}
