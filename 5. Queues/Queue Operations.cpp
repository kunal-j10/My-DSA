// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        queue<int> aux = q;
        int count =0;
        while(!aux.empty())
        {
            if(aux.front()==k)
                count++;
            
            aux.pop();
        }
        return count;
    }
    
};