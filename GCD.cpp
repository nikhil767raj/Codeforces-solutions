#include<bits/stdc++.h>
using namespace std;
#define ll     long long 
int main(){
	int t; cin >> t;
	while(t--){
		ll n,k,count=0; cin >> n >> k;
		ll ar[n+1];
		for(int i=1;i<=n;i++) cin >> ar[i];
			sort(ar,ar+(n+1));
				int prev=ar[0];
			for(int i=2;i<=n;i++){
				if(prev+ar[i]>=k) break;
				else{
					count++;
				}
			}
			ll d=n-(count+2);
			ll mn=min(d,count);
            cout << mn << endl;
	}
}