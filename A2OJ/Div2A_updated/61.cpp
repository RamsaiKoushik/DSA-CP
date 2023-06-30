#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int c=1;
    char temp=s[0];
    int a=s[0]-96;
    string o="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]-temp>1)
        {
            c++;
            temp=s[i];
            o+=temp;
            a+=(s[i]-96);
        }
        if(c==k)
            break;
    }
    //int x='a';
    //cout<<x-97<<endl;
    //cout<<s<<endl;
    //cout<<int(temp)-96;
    //cout<<o;
    if(c==k)
        cout<<a<<endl;
    else 
        cout<<-1;
}