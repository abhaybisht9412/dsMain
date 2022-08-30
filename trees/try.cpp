#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
unordered_map<char ,int> m;
int i=0 , j=0;
string s;
cin>> s;
int n= s.size();
int R ;
cin>>R;
stack<pair<char,int>> st;
st.push(make_pair(s[0],1));
for(int i=1;i<n;i++){
    char ch = s[i] ;
    if(!st.empty() && ch == st.top().first){
        if(st.top().second+1 == R)
        st.pop();
        else {
            st.top().second++ ;
        }
    }
    else {
     st.push({ch,1});   
    }
}
string ans = "";
while(!st.empty()){
    while (st.top().second != 0)
    {
        /* code */
        ans+=st.top().first;
        st.top().second-- ;
    }
    st.pop();
}
reverse(ans.begin(),ans.end());
cout<<ans<<endl;
}