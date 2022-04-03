class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        // since nums[i] <= 10^4
        // maximum element in nums[i] will be 10^4
        
        
        // lets define the hash table
        int H[10001]={0};
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            H[nums[i]]++;
        }
        
        
        // now lets apply house robber Algo on Hash table
        // whose neighbours cant be considered
        int dp[10003];
        dp[0]=0;
        dp[1]=H[0]*0;  //i.e 0 
        
        // here cost will be => (value) * (no. of occurences)
        // we are looking at Hash table, so
        // value = (i) and no. of occurences = (H[i])
        // therefore cost = i * H[i]
        // and when length is i then last index is (i-1)
        // therefore cost for length i will be
        // max( (i-1)*H[i-1] + (cost till length i-2) , (cost till length i-1) )
        
        for(int i=2;i<=10001;i++)
        {
            dp[i]= max((i-1)*H[i-1] + dp[i-2],dp[i-1]);
        }
        return dp[10001];
        
    }
};