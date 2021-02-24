#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	if (c == 0) {
		if (a == d) cout << "1" << endl;
		else cout << "0" << endl;
	}
	else {
		if (a == d && a != 0) cout << "1" << endl;
		else cout << "0" << endl;
	}
}