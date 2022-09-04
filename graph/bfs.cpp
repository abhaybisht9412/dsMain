#include<bits/stdc++.h>
using namespace std;

void bfs(int node , vector<int> g[] ,int N , bool vis[])
{
    queue<int> q;
    q.push(node) ;
    vis[node] = true;
    while (!q.empty())
    {
        /* code */
        int currNode = q.front();
        q.pop();
        cout << currNode << " ";
        for (auto &i : g[currNode]){
            if(!vis[i]){
                q.push(i);
                vis[i] = true;
            }
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
    bfs(0 , g, N ,visited);
}