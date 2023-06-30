#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    string h;
    cin>>h;
    string s;
    string temp="";
    unordered_map<string,string> ump;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        temp=temp+s[0]+s[1]+s[2];
        ump[temp]=s.substr(5);
        temp="";
    }
    string temp2=h;
    //cout<<temp<<endl;
    for(int i=0;i<n;i++)
    {
        temp=ump[temp2];
        temp2=temp;
    }
    //cout<<temp2<<endl;
    //cout<<temp<<endl;
    if(temp.compare(h)==0)
        cout<<"home";
    else 
        cout<<"contest";
}