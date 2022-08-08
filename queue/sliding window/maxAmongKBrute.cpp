#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a ={2 , 3, 5, 2, 9, 7, 1};
    int n=7;
    int k=3;
    vector<int> ans;
    for(int i=0;i<n-2;i++){
        int max_int = -1;
        for(int j=i;j<i+k;j++){
            max_int = max(max_int,a[j]);
        }
        ans.push_back(max_int);
    }
    for(auto i:ans){
        cout<<i<<" ";

    }
}