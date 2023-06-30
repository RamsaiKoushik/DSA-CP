#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int st=0;
    if(n==1)
    {
        if(s[0]=='1')
            cout<<"Yes";
        else
            cout<<"No";
    }
    else
    {
        for(int i=0;i<n-1;i++)
            if(s[i]=='1' && s[i+1]=='1')
            {
                cout<<"No";
                return 0;
            }
        if((s[0]=='0' && s[1]=='0') || s[s.size()-1]=='0' && s[s.size()-2]=='0')
        {
            cout<<"No";
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0' && st==2)
            {
                cout<<"No";
                return 0;
            }
            else if(s[i]=='0' && st<2)
                st++;
            else 
                st=0;
        }
        cout<<"Yes";
    }
}
    /*else
    {
        int c=0;
        if(s[0]=='1')
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0 && s[i]=='1')
                    c++;
                if(i%2==1 && s[i]=='0')
                    c++;}
        }
        //cout<<c<<endl;
        if(s[0]=='0')
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0 && s[i]=='0')
                    c++;
                if(i%2==1 && s[i]=='1')
                    c++;
            }
        }
        //cout<<c<<endl;
        if(c==n)
            cout<<"Yes";
        else
            cout<<"No";
    }*/
