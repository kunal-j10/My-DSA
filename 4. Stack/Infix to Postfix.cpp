class Solution
{
    public:
    // Function to find if a char is operand or operator
    int isOperand(char x)
    {
        if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^')
            return 0;
        return 1;
    }

    // Function to find precedence of Operators
    int precedence(char x)
    {
        if(x=='+' || x=='-')
            return 1;
        else if(x=='*' || x=='/')
            return 2;
        else if(x=='^')    
            return 3;
            
        return 0;
    }
    
    //Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        stack <char> st;
        string str="";
        int i=0;
        
        while(s[i]!='\0')
        {
            char x = s[i];
            if(isOperand(x))
            {
                if(x== '(')
                {
                    st.push(x);
                    i++;
                }
                else if(x==')')
                {
                    if(st.top()=='(')
                    {
                        st.pop();
                        i++;
                    }
                    else{
                        str=str + st.top();
                        st.pop();
                    }
                }
                else{
                    str= str + x;
                    i++;
                }
                
                
            }
            else{
                if(st.empty())
                {
                    st.push(x);
                    i++;
                }
                else if(precedence(x) > precedence(st.top()))
                {
                    st.push(x);
                    i++;
                }
                else if(precedence(x) <= precedence(st.top()))
                {
                    str = str + st.top();
                    st.pop();
                }
                
            }
        }
        while(!st.empty())
        {
            str = str + st.top();
            st.pop();
        }
        return str;
    }
};