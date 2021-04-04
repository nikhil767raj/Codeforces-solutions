// This code is written by Nikhil Raj
// Contact:-- nikhil767raj@gmail.com
//--------------------------------------------

#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
		ll n; cin >> n;
		vector < ll > v;
		for(ll i=0;i<n;i++){
			ll elem; cin >> elem;
			v.push_back(elem);
		}
		ll mn=1e10,p=0;
	    for(ll i=0;i<n;i++){
	        ll x=v[i];
	            if(mn>(x-(i+1)+n)/n){
	                mn=(x-(i+1)+n)/n;
	                p=i+1;
	            }
	    }
	    cout << p << endl;
	return 0;
}