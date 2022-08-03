#include<bits/stdc++.h>
using namespace std ;

int main() {
    vector<int> a= {6,2,5,4,5,1,6};
    int n = 7;
    vector<int> nsl,nsr;
    stack<int> st;
    
    //next smallest right indices 
    for(int i=n-1 ;i>=0 ;i--){
        if(st.empty()){
        nsr.push_back(n);
    }
    else if(!st.empty() && a[st.top()] < a[i])
    nsr.push_back(st.top());
    
    else if(!st.empty() && a[st.top()] >= a[i]){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if(st.empty())
        nsr.push_back(n);
    
    else {
        nsr.push_back(st.top());
    }
    }
    st.push(i);
    }
    reverse(nsr.begin(),nsr.end());
    // for(auto i:nsr){
    //     cout<<i<<" ";
    // }
    
    while(!st.empty())
    st.pop();

    //next smallest left indices
    for(int i=0 ;i<n ;i++){
        if(st.empty()){
        nsl.push_back(-1);
    }
    else if(!st.empty() && a[st.top()] < a[i])
    nsl.push_back(st.top());
    
    else if(!st.empty() && a[st.top()] >= a[i]){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        if(st.empty())
        nsl.push_back(-1);
    
    else {
        nsl.push_back(st.top());
    }
    }
    st.push(i);
    }
    // for(auto i:nsl){
    //     cout<<i<<" ";
    // }

    vector<int> width;
    for(int i=0;i<n;i++){
        width.push_back(nsr[i]-nsl[i]-1);
    }
    // for(auto i:width){
    //     cout<<i<<" ";
    // }

    int ans= INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,width[i]*a[i]);
    }
    cout<<ans;
}