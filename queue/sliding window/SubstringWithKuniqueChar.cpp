#include<bits/stdc++.h>
using namespace std;

int main(){
string s = "aabacbebebe";
int n = s.size();
int k = 3;
unordered_map<char,int> mp;
int i=0,j=0,ans=-1;

while (j<n)
{
    /* code */
    mp[s[j]]++;
    if(mp.size() < k)
    {
        j++;
        continue;
    }
    else if(mp.size() == k){
        ans = max(ans,j-i+1);
    }
    else{
        while (mp.size() > k)
        {
            /* code */
            mp[s[i]]--;
            if(mp[s[i]] == 0)
            mp.erase(s[i]);
            if(mp.size() == k)
            ans=max(ans,j-i+1);
            i++;
        }
    }
    j++;
}
cout<<ans;
}