void reverse(char *str, int len)
{
    stack<char>s;
    for(int i=0;i<len;i++)
    {
        s.push(str[i]);
    }
    
    for(int i=0;i<len;i++)
    {
        str[i]=s.top();
        s.pop();
    }
    

// Your code goes here

}
