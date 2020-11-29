#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	int ar[n], b[n];
	bool possible=true;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (possible) {
			b[i] = ar[i];
			possible = false;
		}
		else b[i] = ar[i] + b[i - 1];
	}
	int m; cin >> m;
	int arr[m];
	for (int i = 0; i < m; i++) cin >> arr[i];
	for (int i=0;i<m; i++){
		int z=arr[i];
		 int *low = lower_bound(b, b + n, z); 
		 cout << low-b+1<< endl;
	}
}