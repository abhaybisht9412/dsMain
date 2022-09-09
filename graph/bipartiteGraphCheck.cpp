#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<int> g[] , vector<int> color , int node , int N){
    color[node] = 1; //red initial
    queue<int> q;
    q.push(node);
    while (!q.empty())
    {
        /* code */
        int curr = q.front();
        q.pop();
        for(int ele : g[curr]){ // traverse all neighbours
            if(color[ele] == color[curr]) //neighbour with same color false
            return false;
            if(color[ele] == -1) //change only unvisited neighbours
            color[ele] = 1 - color[curr];
        }
    }
    return true;
}

int main(){
    vector<vector<int>> a = { 
        {1,2} , {2,3} , {2,4} , {3,5} , {4,5}
    };
    int N;
    cin >> N;
    vector<int> g[N+1];
    
    for(int i=0; i < N ; i++){
        g[a[i][0]].push_back(a[i][1]);
        g[a[i][1]].push_back(a[i][0]);
    }
    vector<int> color(N+1,-1); //-1 uncolored , Green-> 0 , 1-> Red 
    for(int i=0 ; i<N ;i++){
        if(color[i] == -1){
            if(!isBipartite( g , color , i , N))
            cout << "false";
        }
    }
    cout << "true";
}