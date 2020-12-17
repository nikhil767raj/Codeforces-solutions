#include <bits/stdc++.h>
using namespace std;
#define ll     long long

int main() {
	// your code goes here
	ll d1, v1, d2, v2, p, day = 0, vac = 0, count = 0, ok = false; cin >> d1 >> v1 >> d2 >> v2 >> p;
	if (d1 == d2) {
		vac = vac + (v1 + v2);
		while (vac < p) {
			day++;
			vac = vac + (v1 + v2);
		}
		if (vac >= p) cout << d1 + day << endl;
	}
	else if (d1 > d2) {
		while (d2 != d1) {
			if (vac < p) {
				vac = vac + v2;
				d2++;
			}
			else {
				cout << d2 - 1 << endl;
				ok = true;
				break;
			}
		}
		if (ok) {}
		else {
			while (vac < p) {
				vac = vac + (v1 + v2);
				day++;
			}
			cout << d2 + day - 1 << endl;
			// break;
		}
	}
	else {
		while (d2 != d1) {
			if (vac < p) {
				vac = vac + v1;
				d1++;
			}
			else {
				cout << d1 - 1 << endl;
				ok = true;
				break;
			}
		}
		if (ok) {}
		else {
			while (vac < p) {
				vac = vac + (v1 + v2);
				day++;
			}
			cout << d1 + day - 1 << endl;
			// break;
		}
	}
	return 0;
}
