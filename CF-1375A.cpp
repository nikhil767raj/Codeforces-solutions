#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int ar[n];
		int pos = (n - 1) / 2;
		int neg = (n - 1) / 2;
		bool possible = true;
		for (int i = 0; i < n; i++) cin >> ar[i];
		for (int i = 0; i < n; i++) {
			if (possible) {
				possible = false;
				if (ar[i] <= 0) continue;
				else ar[i] = ar[i] * -1;
			}
			else {
				possible = false;
				if (ar[i] >= 0) continue;
				else ar[i] = ar[i] * -1;
			}
		}
		for (int i = 0; i < n; i++)
			cout << ar[i] << " ";
		cout << endl;
	}

}