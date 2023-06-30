#include"bits/stdc++.h"
using namespace std;
int main()
{
    string inp;
    getline(cin,inp);
    unordered_map<char,int> ump;
    for(int i=1;i<inp.size()-1;i=i+3)
        ump[inp[i]]++;
    cout<<ump.size();
}