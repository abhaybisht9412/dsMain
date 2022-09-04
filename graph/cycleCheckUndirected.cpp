#include<bits/stdc++.h>
using namespace std;

bool isCycleUtil (vector<int> g[] , vector<int> vis ,int node)
{
    if(vis[node] == 2) return true;

    vis[node] = 1;

    for (int i = 0; i < g[node].size() ; i++)
    {
        if (vis[g[node][i]] == 1)
        {
            vis[g[node][i]] = 2;
        }
        else{
            if (isCycleUtil(g,vis,g[node][i]))
            return true;
        }
    }
    return false;
}
bool isCycle(vector<int> g[] ,int N){
    vector<int> vis (N,0);
    for (int i = 0; i < N; i++)
    {
        vis[i] = 1;
        for (int j = 0; j < g[i].size(); j++)
        {
            /* code */
            if(isCycleUtil(g,vis,g[i][j]))
            return true;
        }
        vis[i] = 0;
    }
  return false;
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