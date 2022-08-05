#include<bits/stdc++.h>
using namespace std ;

int main() {
vector<int> a = {3, 0, 0, 2, 0, 4};
int n=6;
vector<int> mxr,mxl;
int maxi=INT_MIN;
//mxl
for(int i=0;i<n;i++){
    maxi = max(maxi , a[i]);
    mxl.push_back(maxi);
}
//mxr
maxi=INT_MIN;
for(int i=n-1;i>=0;i--){
    maxi = max(maxi , a[i]);
    mxr.push_back(maxi);
}
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