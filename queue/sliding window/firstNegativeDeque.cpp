#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a ={12,-1,-7,8,-15,30,16,28};
    int n=8;
    int k=3;
    int i=0,j=0;
    deque<int> dq;
    vector<int> ans;
    while (j<n)
    {
        /* code */
        if(a[j] < 0)
        dq.push_back(a[j]);

        if((j-i)+1 < k)
        j++;
        
        else if((j-i)+1 == k) {
        if(dq.empty()){
            ans.push_back(0);
        }
        else {
            ans.push_back(dq.front());
            if(a[i] == dq.front() && !dq.empty())
            dq.pop_front();
           
        }
         i++;
        j++;
        }
    }
    for(auto &itr:ans)
    cout<<itr<<" ";
}