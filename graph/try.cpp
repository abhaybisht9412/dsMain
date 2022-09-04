#include<bits/stdc++.h>
using namespace std;

int countPath (vector<pair<int,int>> g[] ,int V , bool vis[]){

}

int main(){
    int N , E ;
    cin >> N >> E ;
    vector<pair<int,int>> g[];
    for (int i = 0; i < E; i++)
    {
        /* code */
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({v ,w });
    }
    cout << countPath ()
}