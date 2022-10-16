#include<iostream>
using namespace std ;

int main(){
    int a[] = {8,2,5,1,9};
    int n = 5;

    int min_idx ;
    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if(a[j] < a[min_idx])
            min_idx = j;
        }
        swap(a[i] , a[min_idx]);
        /* code */
    }
    for(auto &i : a) cout << i << " " ;
}