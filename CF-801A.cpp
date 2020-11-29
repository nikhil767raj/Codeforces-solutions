#include<bits/stdc++.h>
using namespace std;
int main() {
	string s; cin >> s;
	int count = 0;
	bool possible = true;
	if (s.length() == 1) {cout << "0" << endl; return 0;}
	else {
		for (int i = 0; i < s.length() - 1; i++) {
			if (s[i] == 'V' && s[i + 1] == 'K') {
				count++;
				s[i] = '*';
				s[i + 1] = '*';
				i = i + 1;
			}
			else continue;
		}
		for (int i = 0; i < s.length() - 1; i++) {
			if (s[i] == s[i + 1] && s[i] != '*') {
				count++;
				break;
			}
			else continue;
		}
		cout << count << endl;
		return 0;
	}
	}