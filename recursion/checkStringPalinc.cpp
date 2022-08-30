#include <iostream> 
using namespace std;

bool checkPalin ( string s,int low ,int high) {
    if( low == high || (high-low == 1 && s[low] == s[high])) return true ;
    if(s[low] != s[high]) return false;
    return checkPalin (s ,low + 1 ,high - 1);
}
int main() {
    string s;
    cin>>s;
    cout<<checkPalin(s,0,s.size() - 1);

}