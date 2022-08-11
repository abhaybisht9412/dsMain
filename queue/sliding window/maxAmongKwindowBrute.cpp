#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> a = {1,3,-1,-3,5,3,6,7} ;
int n = 8;
int k=3;
vector<int> ans;
    for(int i=0;i<n-k+1;i++){
        int maxi = INT_MIN;
        for(int j=i;j<i+k;j++){
            maxi = max(maxi ,a[j]);
        }
        ans.push_back(maxi);
    }
    for(auto &i:ans)
    cout<<i<<" ";
}