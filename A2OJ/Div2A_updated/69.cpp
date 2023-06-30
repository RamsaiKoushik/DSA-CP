#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp=0;
    string stemp;
    unordered_map<string,char> ump;
    ump["?"]='a';
    ump["a"]='b';ump["b"]='c';ump["c"]='a';
    ump["a?"]='b';ump["b?"]='c';ump["c?"]='a';
    ump["ab"]='c';ump["bc"]='a';ump["ca"]='b';
    ump["ba"]='c';ump["cb"]='a';ump["ac"]='b';
    ump["cc"]='a';ump["bb"]='c';ump["aa"]='b';
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
            if(s[i]==s[i+1] && s[i]!='?')
            {
                cout<<-1<<endl;
                temp=1;
                break;
            }
        if(temp)
        {
            temp=0;
            continue;
        }
        if(s.size()==1 && s[0]=='?')
        {
            cout<<"a"<<endl;
            continue;
        }
        stemp+=s[1];
        if(s[0]=='?')
            s[0]=ump[stemp];
        stemp.clear();
        stemp+=s[s.size()-2];
        if(s[s.size()-1]=='?')
            s[s.size()-1]=ump[stemp];
        stemp.clear();
        for(int i=1;i<s.size()-1;i++)
            if(s[i]=='?')
            {
                stemp=s[i-1];
                stemp+=s[i+1];
                //cout<<stemp<<" "<<i<<endl;
                s[i]=ump[stemp];
            }       
        cout<<s<<endl;
        stemp.clear();
    }
}