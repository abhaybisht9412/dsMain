#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a ={12,-1,-7,8,-15,30,16,28};
    int n=8;
    int k=3;
    vector<int> ans;
    for(int i=0;i<n-2;i++){
        
        for(int j=i;j<i+k-1;j++){
            if(j==(i+k)-1 && a[j] >= 0)
            {
                ans.push_back(0);
                
            }
            else if(a[j] < 0){
                ans.push_back(a[j]);
                break;
            }
        }
        
        }
        for(auto &i:ans)
        cout<<i<<" ";
    

}