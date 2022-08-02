#include<bits/stdc++.h>
using namespace std ;

int main () {
vector<int> a = {4,10,5,8,2} ;
int n=5;


for(int i=0;i<n;i++){
    int temp=a[i];
    for(int j=i+1;j<n;j++){
        if(a[j] > a[i]){
            a[i] = a[j];
        }
    }
    if(a[i] == temp)
    a[i]=-1;
}
for(auto i:a){
    cout<<i<<" ";
}

}