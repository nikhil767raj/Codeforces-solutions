#include<bits/stdc++.h>
using namespace std;
// int prime(int k){
	int main(){
	bool possible=true;
	vector<int>v;
	for(int i=100000;i>=2;i=i-1){
		for(int j=2;j<i;j++){
			if(i%j == 0) {possible=false;break;}
			else continue;
		}
		if(possible) v.push_back(i);
		else continue;
	}
	for(int k=0;k<v.size();k++){
		cout << v[k] << endl;
	}

}
// int main() {
// 	int t; cin >> t;
// 	while (t--) {
// 		int n,strt; cin >> n;
// 		int ar[n];
// 		for(int i=0;i<n;i++) cin >> ar[i];
// 		for(int i=0;i<n;i++){
// 			b[ar[i]]=1;
// 			b[i]
// 		}
// 	}
// }