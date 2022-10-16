#include<iostream>
using namespace std ;

int main(){
    int a[] = {2,8,5,1,9};
    int n = 5,temp,i,j;
    for ( i = 1; i < n; i++)
    {
        /* code */
        temp = a[i] ;
        j = i-1 ;
        while (j >= 0 && a[j] > temp)
        {
            /* code */
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
       for(auto &i :a) cout << i<< " ";
}