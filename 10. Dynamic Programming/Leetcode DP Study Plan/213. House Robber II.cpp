class Solution {
public:
    // since it is circular
    // either use first house and can't use last 
    // or use last and not first:

    int rob(vector<int>& nums) {
     
        int n=nums.size();
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        
        int dp1[n+1];
        int dp2[n+1];
        
        //we take first element
        dp1[0]=0;
        dp1[1]=nums[0];
        
        // we dont take first element
        dp2[0]=0;
        dp2[1]=0;
        
        
        for(int i=2;i<=n;i++)
        {
            dp1[i]=max(nums[i-1]+dp1[i-2],dp1[i-1]);
            dp2[i]=max(nums[i-1]+dp2[i-2],dp2[i-1]);
        }
        
        //dont take last of dp1
        int m= dp1[n-1];
        
        //take last of dp2
        int l =dp2[n];
        
        return max(m,l);
    }
};


//####### METHOD 2 ########

class Solution {
public:
    int memo[1001];
    int helper(vector<int> nums,int n)
    {
        if(n<=0)
            return 0;
        if(memo[n]==-1)
            return memo[n]= max(nums[n-1]+helper(nums,n-2),helper(nums,n-1));
        return memo[n];
    }
    
    int memo2[1001];
    int helper2(vector<int> nums,int n)
    {
        if(n<=1)
            return 0;
        if(memo2[n]==-1)
            return memo2[n]= max(nums[n-1]+helper2(nums,n-2),helper2(nums,n-1));
        return memo2[n];
    }
    
    int rob(vector<int>& nums) {
        memset(memo,-1,sizeof(memo));
        memset(memo2,-1,sizeof(memo2));

        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==0)
            return max(nums[0],nums[1]);
        int l=helper(nums,n-1);
        int m= helper2(nums,n);
        return max(l,m);
    }
};