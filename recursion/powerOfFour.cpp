#include<iostream>
using namespace std;


int isPowerOfFour (int n){
    if ( n == 1 ) return true;

    if(n % 4 != 0 || n == 0) return false;
    
    return isPowerOfFour(n/4);

    
}

int main(){
    int n;
    cin >> n;
    cout<<isPowerOfFour(n) ;
}