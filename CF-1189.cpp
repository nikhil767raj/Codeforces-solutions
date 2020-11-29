#include<bits/stdc++.h>
using namespace std;
#define  ll     long long
int main(){
	ll n; cin >> n;
	ll ar[n];
	for(ll i=0;i<n;i++) cin >> ar[i];
		sort(ar,ar+n);
	if(ar[n-1]<ar[0]+ar[n-2]){
		cout << "YES" << endl;
		for(int i =0;i<n;i++) cout << ar[i] << " ";
			cout << endl;
	}
	else{
		swap(ar[n-1],ar[n-2]);
		if(ar[n-2] >= ar[n-1]+ar[n-3]) cout << "NO" << endl;
		else{
			cout << "YES" << endl;
			for(int i =0;i<n;i++) cout << ar[i] << " ";
			cout << endl;
		}
	}
	return 0;
}