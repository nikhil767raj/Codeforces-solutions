#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k,z; cin >> n >> k;
		if(n == k){
			while(k--){
				cout << "1" << " ";
			}
			cout << endl;
		}
		else{
			if(n%k == 0){
				z=n/k;
				while(z--){
					cout << k << " ";
				}
				cout << endl;
			}
			else{
				z=n/k;
				while(z--){
					

				}
			}
		}
	}
}