#include<bits/stdc++.h>
using namespace std ;

int main () {
    vector<int> a = {1,3,0,0,1,2,4} ;
    int n = 7;
    vector<int> ans ;
    stack<int> st;
    
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            ans.push_back(-1);
        }
        else if(!st.empty() && st.top() > a[i]){
            ans.push_back(st.top());
        }
        else if(!st.empty() && st.top() <= a[i])
        {
            while(!st.empty() && st.top() <= a[i])
            {
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
