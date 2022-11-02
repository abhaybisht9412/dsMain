#include "iostream"
#include "math.h"
using namespace std;

class overload {
     public :

     void over(int a, int b){
        cout << a + b << endl;
     }

     void over(string s){
        cout << s << endl;
     }
     void over(int a){
        cout << pow(a,2);
     }
};
int main(){
    overload o ;
    o.over(2,3);
    o.over("hello ") ;
    o.over(10);
}