#include<bits/stdc++.h>
using namespace std;


void output(vector<int>& a) {
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << (i + 1 == a.size() ? "\n" : " ");
	}
}

int main() {
	int n; cin >> n;
	vector<int> a(n), zeroes, ans;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) zeroes.push_back(i);
	}
	// output(zeroes);
	int counter = 0;
	bool no_increment = false;
	for (int i = 0; i < n; i++) {
		if (counter + 1 == zeroes.size()) no_increment = true;
		if (!no_increment && (abs(i - zeroes[counter]) < abs(i - zeroes[counter + 1]))) {
			ans.push_back(abs(i - zeroes[counter]));
		} else {
			if (no_increment) {
				ans.push_back(abs(i - zeroes[counter]));
			} else {
				counter++;
				ans.push_back(abs(i - zeroes[counter]));
			}
		}
		// if (i == zeroes[counter]) {
		// 	ans.push_back(0);
		// 	if (!no_increment) counter++;
		// } else {
		// 	ans.push_back(abs(i - zeroes[counter]));
		// }
	}
	output(ans);
	return 0;
}