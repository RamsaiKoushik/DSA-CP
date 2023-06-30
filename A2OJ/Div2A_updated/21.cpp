#include"bits/stdc++.h"
using namespace std;
int main()
{
    int k;
    cin>>k;
    for(int x=0;x<k;x++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        int time=0;
        while(true)
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='A' && s[i+1]=='P')
                {
                    s[i+1]='A';
                    i++;
                    c++;
                }
            }
            if(!c)
            {
                cout<<time<<endl;
                break;
            }
            time++;
            c=0;
        }
    }
}