// Finding missing elements in an array
// E.g: A[10]={3,7,4,9,12,6,1,11,2,10}
// missing elements = 5,8

// Time Complexity of O(n)


#include <iostream>
using namespace std;

class General
{
    public:
    int length_of_array,max=0,min=0;
    int* A;
    
    General()
    {
        cout<<"Enter no. of elements in the array\n";
        cin>>length_of_array;
        A= new int(length_of_array);
        cout<<"Enter array elements\n";
        for(int i=0;i<length_of_array;i++)
        {
            cin>>A[i];
        }
        max=min=A[0];
    }
    
    void Display()
    {
        cout<<"Displaying array elements  ";
        for(int i=0;i<length_of_array;i++)
        {
            if(A[i]>=max)
                max=A[i];
            if(A[i]<=min)
                min=A[i];
            cout<<A[i]<<" ";
        }
        cout<<"\nmax = "<<max<<endl;
        cout<<"min = "<<min<<endl;
    }
    void Hash()
    {
        int H[max+1]={0};
        for(int i=0;i<length_of_array;i++)
        {
            H[A[i]]++;
        }
        for(int i=min;i<=max;i++)
        {
            if(H[i]==0)
            {
                cout<<i<<" ";
            }
        }
    }
};

int main()
{
    General obj;          // O(n)
    obj.Display();        // O(n)
    obj.Hash();           // O(n)
}