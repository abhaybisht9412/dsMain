#include<bits/stdc++.h>
using namespace std;

void dfs(int node , vector<int> g[] ,int N , bool vis[])
{
    cout << node << " ";
    vis[node] = true;

    for(auto &i : g[node]){
        if(!vis[i])
        {
            dfs(i ,g ,N ,vis);
        }
    }
}
int main(){
int N;
    cin >> N;
    vector<int> g[N]; //array of vectors , 1 array uske index pe diff size k vectors
    int E;
    cin >> E ;
    for( int i=0 ;i < E ;i++){
        int u,v ;
        cin >> u >> v;
        g[u].push_back(v);
    }
    bool visited[N] = {false};
    dfs(0 , g, N ,visited);
}