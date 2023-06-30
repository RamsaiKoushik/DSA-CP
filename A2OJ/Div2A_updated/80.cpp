#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> ump;
    for(int i=0;i<s.size();i++)
        ump[s[i]]++;
    cout<<min({ump['B'],ump['u']/2,ump['l'],ump['b'],ump['a']/2,ump['s'],ump['r']})<<endl;
}