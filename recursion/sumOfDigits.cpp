#include<iostream>
using namespace std;

int calSum ( int n ) {
    if( n == 0) return 0;
    return  n % 10 +  calSum( n / 10) ;
}
int main(){
    int n = 123;
    cout<<calSum(n);
}

//123