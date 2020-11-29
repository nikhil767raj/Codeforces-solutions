#include<bits/stdc++.h>
using namespace std;
#define ll      long long
int main(){
	ll n,l; cin >> n >> l;
	ll ar[n];
	double mx=-1;
	for( ll i=0;i<n;i++) cin >> ar[i];
	sort(ar,ar+n);
	mx=max(ar[0]-0,l-ar[n-1]);
		for(ll i=1;i<n;i++){
			mx=max((double)(ar[i]-ar[i-1])/2,mx);
		}
       printf("%.09lf",mx);
       cout << endl;

}