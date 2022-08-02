#include<bits/stdc++.h>
using namespace std ;

int main () {
vector<int> a = { 4 ,5 ,2 ,10 ,8 };
int n=5;

stack<int> st;
vector<int> ans;

for(int i=n-1 ;i>=0 ;i--){
    if(st.empty())
    ans.push_back(-1);
    else if(!st.empty() && st.top() <  a[i]){
        ans.push_back(st.top()) ;
    }
    else if(!st.empty() && st.top() >= a[i]){
        while(!st.empty() && st.top() >= a[i]){
            st.pop();
        }
        if(st.empty()) ans.push_back(-1);
        else {
            ans.push_back(st.top());
        }
    }
    st.push(a[i]);
}
reverse(ans.begin(),ans.end());
for(auto i:ans){
    cout<<i<<" ";
}
}