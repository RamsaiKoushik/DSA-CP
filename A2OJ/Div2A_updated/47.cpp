#include"bits/stdc++.h"
using namespace std;
int main()
{
    float h,w;
    int u1,d1;
    int u2,d2;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    if(d1<d2)
    {
        swap(u1,u2);
        swap(d1,d2);
    }
    int s=(h*(h+1))/2-(d1*(d1+1))/2;
    w+=s;
    w=w-u1;
    //if(w<0)
        //w=0;
    s=(d1*(d1+1))/2-(d2*(d2+1))/2;
    w+=s;
    w=w-u2;
    //if(w<0)
        //w=0;
    s=(d2*(d2+1))/2;
    w+=s;
    if(w<0)
        w=0;
    cout<<w;
}