#include<iostream>
using namespace std;

void printArr ( int a[] , int n , int sz){
 
 if( n == sz)  return ;
 
 printArr (a , n+1 ,sz);
 cout<< a[n] << " ";

}

int main(){
    int a[] = {1,2,3,4};
    int sz = 4;
    int n = 0;
    printArr(a , n , sz);
}