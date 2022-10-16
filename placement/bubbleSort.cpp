#include "iostream"
using namespace std ;

int main(){
    int a[] = {2,8,5,1,9};
    int n = 5;
    for (int  i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            if( a[j] > a[j+1] )
            swap(a[j],a[j+1]);
        }
        
    }
    for(int i:a) cout << i << " ";
    
}