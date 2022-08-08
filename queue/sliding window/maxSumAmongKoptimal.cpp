//it is different from max among k windows
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a ={2 , 3, 5, 2, 9, 7, 1};
    int n=7;
    int k=3;

    int i=0,j=0;
    int sum = 0;
    int max_sum = -1;
    while(j<n){
        sum+=a[j];
        if(j-i+1 < k)
        j++;
        else if(j-i+1 == k){
            max_sum = max (max_sum,sum);
            sum-=a[i];
            i++;
            j++;
        }
    }
    cout<<max_sum;
}