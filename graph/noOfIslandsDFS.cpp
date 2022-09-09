#include<bits/stdc++.h>
using namespace std;

void countIsland (int i , int j ,int n ,int m , vector<vector<char>> &island){
    if(island[i][j] == '2' || island[i][j] == '0'|| i < 0 || i >= n || j < 0 || j>=m) 
    return ;

    island[i][j] = '2';

    countIsland(i+1 , j , n ,m , island);
    countIsland(i , j+1 , n ,m , island);
    countIsland(i-1 , j , n ,m , island);
    countIsland(i , j-1 , n ,m , island);

}

int main (){
    vector<vector<char>> island = {
        {'1','1','1','0'},
        {'1','1','0','0'},
        {'0','0','0','0'},
        {'1','1','1','0'}
    } ;
   int n = island.size();
   int m = island[0].size();
    int NoOfIsland = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m ; i++)
        {
            if(island[i][j] == '1'){
                countIsland( i , j , n , m , island);
                NoOfIsland+=1;
            }
        }
    }
    cout << NoOfIsland ;
}