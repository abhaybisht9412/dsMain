#include<bits/stdc++.h>
using namespace std ;

int main() {
vector<int> a = {8, 8, 2 ,4 ,5, 5, 1};
int n=7;
vector<int> mxr(n),mxl(n);

//mxl
mxl[0]=a[0];
for(int i=1;i<n;i++){
    mxl[i]=max(mxl[i-1],a[i]);
}
//mxr
mxr[n-1]=a[n-1];
for(int i=n-2;i>=0;i--){
    mxr[i]=max(mxr[i+1],a[i]);
}
// for(auto i:mxl){
//     cout<<i<<" ";
// }
// cout<<endl;
// for(auto i:mxr)
// cout<<i<<" ";
vector<int> mini ;
for(int i=0;i<n;i++){
    mini.push_back(min(mxl[i],mxr[i]));
}
int water = 0;
for(int i=0;i<n;i++){
    water+=abs(mini[i] - a[i]);
}
cout<<water<<endl;
}