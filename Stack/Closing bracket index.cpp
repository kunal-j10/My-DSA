class Solution
{
    public:
        int closing (string s, int pos)
        {
            vector <int> B;
            int count=0;
            for(int i=0;s[i]!='\0';i++)
            {
                if(s[i]=='[')
                {
                    B.push_back(i);
                    count++;
                }
                if(s[i]==']')
                {
                    if(B[count-1] == pos)
                    {
                        return i;
                    }
                    B.pop_back();
                    count--;
                    
                }  
            }
            return 0;
        }
};