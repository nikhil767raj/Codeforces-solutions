#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x,count=0; cin >> n >> x;
		int ar[n];
		bool possible=false,ok=false,check=false;
		for (int i = 0; i < n; i++) cin >> ar[i];


		if (n == x && n == 1 && ar[0] % 2 == 1) {
			cout << "Yes" << endl;
			continue;
		}
		else {
			cout << "No" << endl;
			continue;
		}
		if (n == x && n > 1) {
			cout << "No" << endl;
			continue;
		}
		for(int i=0;i<n;i=i+2){
			if(ar[i]%2 == 1){
				count++;
				possible=true;
			}
			else if(ar[i]%2 == 1){
				if(possible){
					count++;
					possible=false;
				}
			}
			if(count == x){
				cout << "Yes" << endl;
				ok=true;
				break;
			}
		}
		if( ok ) continue;
		for(int i=1;i<n;i=i+2){
			if(ar[i]%2 == 1){
				count++;
				possible=true;
			}
			else if(ar[i]%2 == 1){
				if(possible){
					count++;
					possible=false;
				}
			}
			if(count == x){
				cout << "Yes" << endl;
				check=true;
				break;
			}
		}
		if(check == false) cout << "No" << endl; 
	}
}