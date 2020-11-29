#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n;
	string s; cin >> s;
	int freq[26] = {0};
	int count = 0;
	for (int i = 0; i < s.length(); i = i + 2) {
		if (abs((int)s[i] - (int)s[i + 1]) == 32) continue;
		else {
			int num = tolower(s[i + 1]) - 'a';
			freq[s[i] - 'a']++;
			if (freq[num] > 0) {freq[num]--; continue;}
			else {
				possible = true;
				count++;
			}
		}

	}
	cout << count << endl;
}