#include"bits/stdc++.h"
using namespace std;
int main()
{
    string s1,s2;
    int n;
    cin>>s1>>s2;
    cin>>n;
    vector<string> vec={s1,s2};
    cout<<vec[0]<<" "<<vec[1]<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;
        if(s1==vec[0])
            vec[0]=s2;
        else
            vec[1]=s2;
        cout<<vec[0]<<" "<<vec[1]<<endl;
    }
}