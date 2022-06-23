class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    bool isChar(char c)
    {
        if(c=='+' || c=='-' ||
           c=='*' || c=='/' ||
           c=='^')
            return 0;
        return 1;
    }
    int precedence(char c)
    {
        if(c=='(' || c==')')     // ---|  Not Operator but to handle bracket
            return 0;            // ---|  when '('' upcoming operator should be pushed
                                //       amd for that it should not have any precedence
        
        else if(c=='+' || c=='-')
            return 1;
        else if(c=='*' || c=='/')
            return 2;
        else
            return 3;
    }
    string infixToPostfix(string s) {
        string res="";
        stack<char> st;
        int i=0;
        while(i<s.length())
        {
            // if s[i] is character
            if(isChar(s[i]))
            {
                if(s[i]=='(')
                {
                    st.push(s[i]);
                    i++;
                }
                else if(s[i]==')')
                {
                    if(st.top()=='(')
                    {
                        st.pop();
                        i++;
                    }
                    else{
                        // any operator in stack
                        // i.e -> *
                        //        +
                        //        (   <<====
                        //        ^
                        //        *
                        //        -
                        // put operator in res
                        res+=st.top();
                        st.pop();
                    }
                }
                else
                    res+=s[i++];
            }
            else{
                if(st.empty() || precedence(s[i]) > precedence(st.top()))
                {
                    // push in stack and wait
                    st.push(s[i]);
                    i++;
                }
                else{
                    // pop and put it into res string
                    res+=st.top();
                    st.pop();
                }
            }
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};