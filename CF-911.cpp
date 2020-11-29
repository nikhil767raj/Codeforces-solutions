#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll n; cin >> n;
	llar[n],br[n];
	ll sum=0,mn=100000;
	bool possible=false;
	for(ll i=0;i<n;i++) {cin >> ar[i]; b[i]=ar[i];}
		sort(b,b+n);
	int ans=b[0];
		for(ll i=0;i<n;i++){
			if(ar[i] == ans){
				possible=true;
				// int dis=i;
				if(ok){
					mn=min(sum+1,mn);
					sum=0;
				}
			}
			else if(possible){
				ok=true;
				sum=sum+1;
			}
		}
return 0;
}