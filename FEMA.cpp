#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k, magnet = 0, sheet = 0; cin >> n >> k;
		string s; cin >> s;
		int start = -2;
		bool possible = false, ok = false;
		// 	for (int i = 0; i < n; i++) {
		// 		if (s[i] == 'M' || s[i] == 'I' && faulty==true) {
		// 			if (start + 1 == i && ok=false) {
		// 				if (k > 0) magnet++;
		// 				else continue;
		// 			}
		// 			start = i;
		// 			possible = true;
		// 			if (ok) {
		// 				int peak = k + 1 - (sheet + (i - start));
		// 				if (peak > 0) magnet++;
		// 				else {sheet = 0; ok = false;}
		// 			}
		// 		}
		// 		else if (possible) {
		// 			ok = true;
		// 			if (s[i] == '_') continue;
		// 			else if (s[i] == ':') sheet++;
		// 			else if (s[i] == 'X') {
		// 				sheet = 0;
		// 				possible = false;
		// 				ok = false;
		// 			}
		// 		}
		// 		else continue;
		// 	}
		// 	cout << magnet << endl;
		bool ok = true, possible = false;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'M') {
				start = i;
				possible = true;
			}
			else if (possible) {
				if (s[i] == ':') sheet++;
				else if (s[i] == '_') continue;
				else if (s[i] == 'X') {}
			}
			else if (possible && ok == false) { 

				if (s[i] == ':') sheet++;
				else if (s[i] == '_') continue;
				else if (s[i] == 'X') {}
				else if (s[i] == 'M'){
				int peak = k + 1 - (start - i + sheet);
				if(peak>0) {magnet++; possible=false;}


				}
				else {start=i;}
			}
			else {
				if (s[i] == 'I') {
					// possible = false;
					int peak = k + 1 - (start - i + sheet);
					if (peak > 0) {magnet++; possible = false;}
					else {
						possible = true;
						ok = false;
					}
				}
			}
		}
	}
}
}