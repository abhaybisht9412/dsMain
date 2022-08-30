#include<iostream>
using namespace std;

void reverseDigit (int n){
    if (n == 0) return ;
    cout << n % 10;
    reverseDigit ( n / 10) ;
}
int main (){
    int n = 123;
    reverseDigit(n);
}