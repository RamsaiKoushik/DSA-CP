#include"bits/stdc++.h"
using namespace std;
bool Help(string s,int i,int z,int k)
{
    int temp=s.size();
    //string d="Danil";
    unordered_map<int,string> ump;
    ump[0]="Danil";ump[1]="Olya";ump[2]="Slava";ump[3]="Ann";ump[4]="Nikita";
    string d=ump[z];
    char t;
    if(i+k<temp)
    {
        for(int j=0;j<k+1;j++)
        {
            t=s[i+j];
            if(t!=d[j])
                return false;
        }
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='D')
            if(Help(s,i,0,4))
            {
                c++;
                i=i+4;
                //cout<<i<<" "<<endl;
            }
        if(s[i]=='O')
            if(Help(s,i,1,3))
            {
                c++;
                i=i+3;
                //cout<<i<<" "<<endl;
            }
        if(s[i]=='S')
            if(Help(s,i,2,4))
            {
                c++;
                i+=4;
                //cout<<i<<" "<<endl;
            }
        if(s[i]=='A')
            if(Help(s,i,3,2))
            {
                c++;
                i+=2;
                //cout<<i<<" "<<endl;
            }
        if(s[i]=='N')
            if(Help(s,i,4,5))
            {
                c++;
                i+=5;
                //cout<<i<<" "<<endl;
            }
    }
    if(c==1)
        cout<<"YES";
    else
        cout<<"NO";
}