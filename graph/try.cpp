#include<bits/stdc++.h>
using namespace std;

bool isCycle(vector<int> g[], int N ,vector<bool> vis){
    
}

int main (){
    int N,E;
    cin >> N >> E;
    vector<int> g[N+1];
    for (int i = 0; i < N; i++)
    {
        /* code */
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
    }
    vector<bool> vis[N+1];
    cout << isCycle(g,N,vis);
}