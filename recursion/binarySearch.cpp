#include <iostream> 
using namespace std;

int indBS(int a[] ,int data ,int lo ,int hi){
   
    int mid = (hi - lo) / 2;
    if( a[mid] == data ) return mid ;
     if( data > a[mid] ) 
    return indBS (a ,data ,mid + 1 , hi);
    else return indBS ( a, data , lo , mid - 1);
    
    return -1;
}

int main() {
    int a[] = {4,5,6,7,21,33,432};
    int n = 7;
    
    int key = 21;
    int ans =  indBS (a , key ,0 ,n-1);
    cout << ans ;
}