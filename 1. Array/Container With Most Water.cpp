class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxArea=0;
        int area;
        for(int i=0,j=n-1;i<j;)
        {
            if(height[i]>=height[j])
            {
                area = (j-i)*height[j];
                j--;
            }
            else
            {
                area = (j-i)*height[i];
                i++;
            }
            
            if(area>=maxArea)
                maxArea=area;
           
        }
        return maxArea;
           
    }
};