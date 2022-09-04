#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> g[] ,int u, int v){
    g[u].push_back(v);
}
void printGraph(vector<int> g[], int N ){
    for(int i=0 ;i<N ;i++){
        cout << "for vertex " << i << endl;
        cout << " head " ;
        for (auto &v : g[i]){
            cout << "-> " << v ;
        }
        cout << endl;
    }
}
int main (){
    int N;
    cin >> N;
    vector<int> g[N] ;
    int E;
    cin >> E ;
    for(int i=0 ;i<E ;i++){
        int u , v;
        cin >> u >> v;
        addEdge(g ,u ,v);
    }
    printGraph(g , N);
}
