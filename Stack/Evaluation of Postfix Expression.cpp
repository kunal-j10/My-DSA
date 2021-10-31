// # GFG Solution

class Solution
{
    public:
    
    int evaluatePostfix(string S)
    {
        stack <int> st;
        int i=0;
        while(S[i]!='\0')
        {
            if(S[i]>='0' && S[i]<='9')
            {
                st.push(S[i]-'0');
            }
            else{
                int op2=st.top();
                st.pop();
                int op1=st.top();
                st.pop();
                switch(S[i])
                {
                    case '+':{
                        st.push(op1+op2);
                        break;
                    }
                    case '-':{
                        st.push(op1-op2);
                        break;
                    }
                    case '*':{
                        st.push(op1*op2);
                        break;
                    }
                    case '/':{
                        st.push(op1/op2);
                        break;
                    }
                }
            }
            i++;
        }
        return st.top();
    }
};




// ##LeetCode Solution : Evaluate Reverse Polish Notation


// Here we are given a vector of string
// not just String ... so need to be carefull.

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        // using while(tokens[i]!="\0") will give error
        // as things are stored in vector so there is no \0
        
        
        // point to remember : if "abc" 
        //                     then tokens[0]= "abc"    -> string
        //                     and  tokens[0][0] = 'a'  -> char
        
        
        //                    also if "123"
        //                    tokens[i]-'0'  will be wrong it equates to "123"-'0'
        //                    stoi(token[i]) is correct 
        
        stack <int> st;
        
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!= "+" && tokens[i]!= "-" && tokens[i]!= "*" && tokens[i]!= "/")
                st.push(stoi(tokens[i]));
            else{
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                switch(tokens[i][0])
                {
                    case '+':{
                        st.push(op1 + op2);
                        break;
                    }
                    case '-':{
                        st.push(op1 - op2);
                        break;
                    }
                    case '*':{
                        st.push(op1 * op2);
                        break;
                    }
                    case '/':{
                        st.push(op1/op2);
                        break;
                    }
                }
            }
            
        }
        return st.top();
    }
};