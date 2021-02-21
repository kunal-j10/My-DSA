/******************************************************************************
Tower of Hanoi:-
                The puzzle starts with the disks in a neat stack in ascending order 
                of size on one rod,the smallest at the top, thus making a conical shape.
                The objective of the puzzle is to move the entire stack to last rod, 
                obeying the following simple rules:
                1:- Only one disk can be moved at a time.
                2:- Each move consists of taking the upper disk from one of the stacks and 
                    placing it on top of another stack or on an empty rod.
                3:- No larger disk may be placed on top of a smaller disk.
*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;


void TOH(int n,char A, char B, char C)
{
    if(n>0)
    {
    TOH(n-1,A,C,B);
    cout<<"Move 1 disk from "<<A<<" to "<<C<<"\n";
    TOH(n-1,B,A,C);
    }
}

int main()
{
    cout<<"Enter no. of disk in hanoi tower\n";
    int n;
    cin>>n;
    cout<<"Enter start tower name\n";
    char A;
    cin>>A;
    cout<<"Enter target tower name\n";
    char B;
    cin>>B;
    cout<<"Enter Auxilary tower name\n";
    char C;
    cin>>C;
    TOH(n,A,B,C);
    return 0;
}

