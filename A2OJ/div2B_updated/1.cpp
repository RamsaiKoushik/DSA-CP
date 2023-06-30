#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s1,s2,s3;
    unordered_map<int,char> ump1;
    unordered_map<char,int> ump2;
    vector<char> vec;
    cin>>s1>>s2>>s3;
    for(int i=0;i<s1.size();i++)
    {
        ump2[s1[i]]=i+1;
        ump2[s1[i]-32]=i+1;
        ump1[i+1]=s2[i];
    }
    for(int i=0;i<s3.size();i++)
    {
        if((s3[i]>=65 && s3[i]<=90) || (s3[i]>=97 && s3[i]<=122))
        {
            if(s3[i]<97)
                vec.push_back(ump1[ump2[s3[i]]]-32);
            else
                vec.push_back(ump1[ump2[s3[i]]]);
        }
        else
        {
            vec.push_back(s3[i]);
        }
    }
    for(int i=0;i<vec.size();i++)
        cout<<vec[i];
    cout<<endl;
}