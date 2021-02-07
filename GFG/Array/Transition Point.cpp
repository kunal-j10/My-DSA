//   
//      Taking a sorted array containing only 0s and 1s, 
//      we have to find the transition point.
//      and if no transition point found , we have
//      to print -1 as output , else the transition index.
//

#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}


int transitionPoint(int arr[], int n) {
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            return i;
        
        }
        
    }

    return -1;
}