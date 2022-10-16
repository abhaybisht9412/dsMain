#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> a = {10,15,20} ;
    vector<int> dp(n) ;
    dp[0] = a[0];
    dp[1] = a[1];
    for(int i=2;i<n;i++)
    {
        dp[i] = a[i] + min(dp[i-1] , dp[i-2]) ;
    }
    for(auto &i :dp) cout  << i << " ";
}