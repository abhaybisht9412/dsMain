#include<bits/stdc++.h>
using namespace std ;

// brute
// int main () {
// vector<int> a = {100,80,60,70,60,75,85};
// int n=7;
// vector<int> ans;
// for(int i=n-1;i>=0;i--){
//     int c=1;
//     for(int j=i-1 ; j>=0 ;j--){
//         if(a[j]<a[i]){
//             c++;
//         }
//         else{
//             ans.push_back(c) ;
//             break;
//       } 
//     }
// }
// ans.push_back(1);
// reverse(ans.begin(),ans.end());
// for(auto i:ans){
//     cout<<i<<" ";
// }
// }

// 

int main () {
vector<int> a = {100,80,60,70,60,75,85};
int n=7;
vector<int> ans(n);
stack<int> st;

for(int i=0;i<n;i++){
    if(st.empty()){
        ans[i]=-1;
    }
    else if(!st.empty() && a[st.top()] > a[i])
    ans[i]=st.top();
    
    else if(!st.empty() && a[st.top()] <= a[i]){
        while(!st.empty() && a[st.top()] <= a[i]){
            st.pop();
        }
        if(st.empty())
        ans[i]=-1;
    
    else {
        ans[i]=st.top();
    }
    }
    st.push(i);
}
// for(auto i:ans){
//     cout<<i<<" ";
// }
for(int i=0;i<n;i++){
    cout<<i-ans[i]<<" ";
}
}