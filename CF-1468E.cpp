#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int ar[4];
		for (int i = 0; i < 4; i++) cin >> ar[i];
		sort(ar, ar + 4);
		cout << ar[0]*ar[2] << endl;
	}
}