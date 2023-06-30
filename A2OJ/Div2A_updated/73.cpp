#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=s.size()-1;
    int c=0;string temp="";
    if(s.size()<7)
        cout<<"no";
    else
    {
        while(i>-1)
        {
            if(temp.size()==7)
            {
                cout<<"yes";
                return 0;
            }
            else if(temp.size()==6)
            {
                if(s[i]=='1')
                    temp+=s[i];
                else
                    i--;
            }
            else
            {
                if(s[i]=='0')
                    temp+=s[i];
                //cout<<"ye"<<" ";
                i--;
            }
        }
        //cout<<temp<<endl;
        if(temp.size()==7)
            cout<<"yes";
        else
            cout<<"no";
    }
}