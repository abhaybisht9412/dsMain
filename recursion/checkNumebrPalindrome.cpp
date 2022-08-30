#include <iostream> 
using namespace std;

int checkPalin(int n ,int rev){
if( n == 0) return rev ;
rev = rev * 10 + n % 10 ;
return checkPalin( n / 10 , rev) ;
}

int main(){
int n;
cin >> n;
int rev = checkPalin(n , 0);
 rev == n ? cout << "1" : cout << "0" ;
}