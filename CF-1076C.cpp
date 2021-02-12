#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int d; cin >> d;
		if (d == 0) cout << "Y" << " " <<  "0.00000000" << " " << "0.00000000" << endl;
		else if ( d < 4) cout << "N" << endl;
		else {printf("Y %.10f %.10f", (d + sqrt(d * (d - 4))) / 2, (d - sqrt(d * (d - 4))) / 2); cout << endl;}
	}
}