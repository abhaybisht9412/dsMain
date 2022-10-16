#include<bits/stdc++.h>
using namespace std;

void topologicalSort(vector<vector<int>> &g ,stack<int> &st, vector<bool> &vis ,int node){
    
    vis[node] = true;

    for(int i=0;i<g[node].size();i++){
        if(!vis[g[node][i]])
        topologicalSort(g,st,vis,g[node][i]);
    }
    st.push(node);
}

int main(){
    int N,E;
    cin >> N >> E;
    vector<vector<int>> g(N);
    for (int i = 0; i < E; i++)
    {
        /* code */
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    stack<int> st;
    vector<bool> vis(N,false);
    for(int i=0;i<N;i++){
    if(!vis[i])
    topologicalSort(g ,st ,vis ,i);
    }
    while (!st.empty())
    {
        /* code */
        cout << st.top() << " ";
        st.pop();
    }
    
}