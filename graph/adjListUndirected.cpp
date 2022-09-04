#include<bits/stdc++.h>
using namespace std;

void newEdge(vector<int> g[] , int u ,int v){
    g[u].push_back(v);
    g[v].push_back(u);    
}
void printGraph(vector<int> g[] , int N){
    for(int i=0 ; i<N ;i++){
        cout << "for vertex " << i << endl;
        cout << "head  " ;
        for(auto &node : g[i]){
            cout << "-> " <<node ; 
        }
        cout << endl ;
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
        newEdge (g , u ,v);
    }
    printGraph(g,N) ;
}