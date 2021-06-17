
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector < int > v;
		vector < pair < int , int > >vt;
		map < int , int  >mp;
		for (int i = 0; i < n; i++) {
			int elem; cin >> elem;
			v.push_back(elem);
			mp[elem]++;
		}
		for (auto i : mp) {
			if (i.second > 1) vt.push_back({i.first, i.second - 1});
			cout << i.first << " ";
		}
		for (int i = 0; i < vt.size(); i++) {
			while (vt[i].second--) {
				cout << vt[i].first << " ";
			}
		}
		cout << endl;
	}
}