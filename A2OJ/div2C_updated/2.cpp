#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    stack<char> st;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(!st.empty() && st.top()=='(')
        {
            if(s[i]==')')
            {
                st.pop();
            }
            else
                st.push('(');
        }
        if(!st.empty() && st.top()==')')
        {
            if(s[i]=='(')
            {
                c++;
                st.push('(');
                // if(c>2)
                // {
                //     cout<<"No"<<endl;
                //     return 0;
                // }
                // st.pop();
                // st.push('(');
                // st.push('(');
            }
            else
            {
                st.push(')');
            }
        }
        if(st.empty())
            if(s[0]==')')
            {
                //c++;
                st.push(')');
            }
            else
                st.push('(');
    }
    if(!st.empty())
         c+=st.size();
    //int temp=st.size()-2;
    if((s[0]==')' && s[1]=='(' ) && s.size()==2)
    {
        cout<<"Yes"<<endl;
        return 0;
    }
    if(c>1)
        cout<<"No"<<endl;
    else if(n%2==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}