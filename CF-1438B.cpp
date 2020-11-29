#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ar[n];
		bool possible=false;
		for(int i=0;i<n;i++) {cin >> ar[i];}
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++){
			mp[ar[i]]++;
		}
		for(auto i: mp){
			if(i.second>1) {possible=true;
			break;}
			else continue;
		}
		if(possible) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}