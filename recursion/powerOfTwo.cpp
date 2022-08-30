#include<iostream>
using namespace std;


int isPowerOfTwo (int n){
    if ( n == 1 ) return true;

    if(n % 2 != 0 || n == 0) return false;
    isPowerOfTwo(n/2);

    return true;
}

int main(){
    int n;
    cin >> n;
    cout<<isPowerOfTwo(n) ;
}
//32