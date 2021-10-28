class Solution {
public:
    bool isValid(string s) {
        stack <int> st;
        int n= s.length();
        for(int i=0; i<n;i++)
        {
            if(s[i]=='(')
                st.push('(');
            if(s[i]=='[')
                st.push('[');
            if(s[i]=='{')
                st.push('{');
            
            if(s[i]==')' || s[i]==']' || s[i]=='}')
            {
                {
                    if(st.empty())
                        return false;
                }
                
                if(s[i]==')' && st.top()=='(')
                    st.pop();
                else if(s[i]=='}' && st.top()=='{')
                    st.pop();
                else if(s[i]==']' && st.top()=='[')
                    st.pop();
                else
                    return false;
            }
            
        }
        if(st.empty())
            return true;
        return false;
    }
};