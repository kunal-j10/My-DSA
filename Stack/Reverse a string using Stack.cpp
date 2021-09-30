char* reverse(char *S, int len)
{
    char *str;
    str=(char *)malloc((len+1)*sizeof(char));
    stack<char> st;
    for(int i=0;i<len;i++)
    {
        st.push(S[i]);
    }
    for(int i=0;i<len;i++)
    {
        str[i]=st.top();
        st.pop();
    }
    str[len]='\0';
    return str;
}