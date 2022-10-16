#include <iostream> 
using namespace std;

int knapSack(int wt[],int pt[],int w , int n){
    if(n == 0 || w == 0) return 0;
    if(wt[n-1] > w) //reject
    return knapSack(wt,pt,w,n-1);
    else{
        // max(reject , non reject)
     return max(knapSack(wt,pt,w,n-1) , pt[n-1] + knapSack(wt,pt,w-wt[n-1],n-1));
    }
}

int main (){
    int wt[] = {3 ,4 ,2};
    int pt[] = {8,6,7};
    int n = 3;
    int w = 8;
    cout << knapSack(wt,pt,w,n);

}