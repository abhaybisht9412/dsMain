#include<bits/stdc++.h>
using namespace std;

bool isCycleUtil(vector<int> g[] ,vector<bool> vis ,int node){
    if ( vis[node] ) return true;
    bool ans = false ;
    for (int i = 0; i < g[node].size(); i++)
    {
        /* code */
        ans = isCycleUtil(g ,vis ,g[node][i]);
        if(ans) return true;
    }
    return false;
}

bool isCycle(vector<int> g[] , int N){
    vector<bool> vis(N,false) ;
    bool ans = false;
    for (int i = 0; i < N; i++)
    {
        /* code */
        vis[i] = true;
        for (int j = 0; i < g[i].size(); j++)
        {
            /* code */
            ans =  isCycleUtil (g,vis,g[i][j]);
            if(ans) return true;
        }
        vis[i] = false;
    }
    return false ;
}
int main (){
    int N , E;
    cin >> N >> E ;
    vector<int> g[N];
    for (int i = 0; i < E; i++)
    {
        /* code */
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    cout << isCycle(g ,N); 
}