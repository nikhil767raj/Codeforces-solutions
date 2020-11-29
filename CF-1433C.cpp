#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main(){
	int t; cin >> t;
	while(t--){
		ll n,x,idx=-1,mx=-1; cin >> n;
		ll ar[n];
		bool ok=true;
		for(ll i=0;i<n;i++){
		   cin >> ar[i];
		   mx=max(mx,ar[i]);
		}
		for(int i=0;i<n;i++){
		   if(ar[i] != mx) continue;
		   else{
		      if(i<n-1 && ar[i+1]!=mx) {idx=i+1; break;}
		      if(i>0 && ar[i-1]!=mx) {idx=i+1; break;}
		   }
		}
		cout << idx << endl;
	}
}