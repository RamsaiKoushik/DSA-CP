#include"bits/stdc++.h"
using namespace std;
//finding level of X in graph with vertices 0 to V and with adjacency list adj
int nodeLevel(int V, vector<vector<int> > &adj, int X) { 
    int level[V];
    int visited[V];
    for(int i=0;i<V;i++){
        level[i]=0;
        visited[i]=0;
    }
    visited[V-1]=1;
    int curr_lev,node;
    queue<int>q;
    q.push(V-1);
    while(!q.empty()){
        node=q.front();
        q.pop();
        curr_lev=level[node];
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                level[adj[node][i]]=curr_lev+1;
                q.push(adj[node][i]);
                //visited[adj[node][i]]=1;
            }
        }
    }
    if(X>=V){
        return -1;
    }else{
        return level[X];
    }
}
void Connect(vector<vector<int> > &adj,int i,int j)
{
    if(j>=0)
        adj[i].push_back(j);
}
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    vector<vector<int> > adj(n+1);
    for(int i=n;i>-1;i--)
    {
        Connect(adj,i,i-a);
        Connect(adj,i,i-b);
        Connect(adj,i,i-c);
    }
    cout<<nodeLevel(n+1,adj,0);
}