#include<bits/stdc++.h>
using namespace std;

int main(){
string s = "abaccab";
int n = s.size();
int k = 2;
unordered_map<char,int> m;
int i=0,j=0,ans=-1;

while (j<n)
{
    /* code */
  m[s[j]] ++;

  if(m.size() < k)
  {
    j++;
    continue;
  }
  else if(m.size() == k){
    ans = max(ans,j-i+1);
  }
  else{
    while (m.size() > k)
    {
        /* code */
        
        m[s[i]]--;
        if(m[s[i]] == 0)
        m.erase(s[i]);
        
        i++;
    }
    
  }
  j++;
}
cout<<ans;
}