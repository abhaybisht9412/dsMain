#include <bits/stdc++.h> 
using namespace std;

int knapSack(int wt[],int pt[],int w , int n , vector<vector<int>> &dp){
    if(n == 0 || w == 0) return 0;
    if(dp[n][w] != -1) return dp[n][w];
    if(wt[n-1] > w) //reject
    return dp[n][w] = knapSack(wt,pt,w,n-1,dp);
    else{
        // max(reject , non reject)
     return dp[n][w] = max(knapSack(wt,pt,w,n-1,dp) , pt[n-1] + knapSack(wt,pt,w-wt[n-1],n-1,dp));
    }
}

int main (){
    int wt[] = {3 ,4 ,2};
    int pt[] = {8,6,7};
    int n = 3;
    int w = 8;
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
    // cout << knapSack(wt,pt,w,n,dp);
    int ans = knapSack(wt,pt,w,n,dp);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++)
        cout << dp[i][j] << " " ;
        cout << endl;
    }

}