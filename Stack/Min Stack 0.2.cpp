# define N 10000
class MinStack {
    int* arr;
    int* brr;
    int ptr;
public:
    MinStack() {
        arr= new int[N];
        ptr = -1;
        
        brr= new int[N];
        
    }
    
    void push(int val) {
        if(ptr<=N-1)
        {
        if(ptr==-1 || val<brr[ptr])
        {
            ptr++;
            brr[ptr] = val;
            arr[ptr]=val;
        }
        else if(val>=brr[ptr])
        {
            ptr++;
            brr[ptr] = brr[ptr-1];
            arr[ptr]=val;
        }
        }
    }
    
    void pop() {
        if(ptr!=-1)
        ptr--;
    }
    
    int top() {
        if(ptr != -1)
        return arr[ptr];
        
        return 0;
    }
    
    int getMin() {
        if(ptr != -1)
        return brr[ptr];
        
        return 0;
    }
};