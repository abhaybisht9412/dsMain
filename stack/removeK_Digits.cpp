#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int n = s.size();
stack<char> st;
int k = 1;
for(int i=0;i<n;i++){
    if(!st.empty()){
        while (!st.empty() && k>0 && s[i] < st.top())
        {
            /* code */
            st.pop();
            k--;
        }
    }
    if(st.empty()  && s[i] == '0'){
        continue;
    }
    st.push(s[i]);
}
string ans = "" ;
while (k>0 && !st.empty())
{
    /* code */
    st.pop();
    k--;
}
while (!st.empty())
{
    /* code */
    ans+=st.top();
    st.pop();
}

reverse(ans.begin(),ans.end());
cout<<ans;
}