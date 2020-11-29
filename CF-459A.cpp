#include<bits/stdc++.h>
using namespace std;
int main() {
	int x1, x2, y1, y2, mx, mn; cin >> x1 >> y1 >> x2 >> y2;
	if (x1 != x2 && y1 != y2) {
		if (abs(x2 - x1) != abs(y2 - y1)) {cout << "-1" << endl; return 0;}
		cout << x2 << " " << y1 << " " << x1 << " " << y2 << endl;
	}
	if (x1 != x2 && y1 == y2)  cout << x1 << " " << y1 + abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2) << endl;
	if (x1  == x2 & y1 != y2)  cout << (x1 + abs(y2 - y1)) <<  " " << y1 << " " << (x2 + abs(y2 - y1)) << " " << y2  << endl;


}