#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; 
    cout.tie(NULL)	;

	ll q;
	cin>>q;
	while(q--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans = n, maxi = INT_MAX;
    for(int i=1;i<n;i++){
        int temp  = __gcd(v[0],v[i]);
        if(temp < maxi)
        maxi = temp;
    }
    cout<<maxi*n<<endl;
	}
}