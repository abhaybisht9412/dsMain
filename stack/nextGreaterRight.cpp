#include<bits/stdc++.h>
using namespace std ;

int main () {
    vector<int> a = {1,3,0,0,1,2,4} ;
    int n = 7;
    int i,j;
    for ( i=0 ;i < n ;i++ )
    {
        for (  j = i+1; j < n; j++)
        {
            /* code */
            if(a[j] > a[i]){
                a[i]=a[j];
                break;
            }
        }
        if(j==n){
            a[i]=-1;
        }
    }
    for(auto i:a) {
        cout<<i<<" ";
    }
}