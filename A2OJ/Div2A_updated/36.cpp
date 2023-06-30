#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int m;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        m=0;
        while((a>=1&&b>=2) || (b>=1 && c>=2))
        {
            if(b>=c)
            {
                if(a>0)
                {
                    a--;b-=2;m+=3;continue;
                }
                else
                {
                    b--;c-=2;m+=3;continue;
                }
            }
            if(b<c)
            {
                b--;c-=2;m+=3;
            }
        }
        cout<<m<<endl;
    }
}