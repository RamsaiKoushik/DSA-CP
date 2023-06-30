#include"bits/stdc++.h"
#include"string"
using namespace std;
int main()
{
    string s;
    cin>>s;
    string b=s+s;
    int k=0;
    for(int i=0;i<s.size();i++)
    {
        char c=tolower(s[i]);
        if(c=='a'||c=='e'|| c=='i' || c=='o' || c=='u' || c=='y')
            continue;
        b[k++]='.';
        if(s[i]<97)
            b[k++]=s[i]+32;
        else
            b[k++]=s[i];
    }
    for(int i=0;i<k;i++)
        cout<<b[i];
}