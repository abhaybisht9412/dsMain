#include<bits/stdc++.h>
using namespace std;

        int main(){
    vector<int> a = {1,3,-1,-3,5,3,6,7} ;
    int n = 8;
    int k=3;
    vector<int> ans;
    deque<int> dq;
    int i=0,j=0;
       while (j<n)
       {
        if(dq.empty())
        dq.push_back(a[j]);
        else if(!dq.empty() && a[j] > dq.back()){
            while (!dq.empty() && a[j] > dq.back())
            {
                dq.pop_back();
            }
            dq.push_back(a[j]);
        }
        else if(!dq.empty() && a[j] <= dq.back())
        dq.push_back(a[j]);

        if((j-i)+1 < k){
            j++;
            continue;
        }

        else if((j-i)+1 == k){
            ans.push_back(dq.front());

            if(dq.front() == a[i])
            dq.pop_front();
       
        }
         i++;
        j++;
       } 
       for(auto i:ans)
       cout<<i<<" ";
}