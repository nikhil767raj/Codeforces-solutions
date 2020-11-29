#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<char> st;
		bool possible = true;
		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			if (possible || st.empty()) {st.push(s[i]); possible = false;}
			else {
				if (s[i] == 'B' && st.top() == 'B') st.pop();
				else if (s[i] == 'B' && st.top() == 'A') {count++; st.pop();}
				else st.push(s[i]);
			}
		}
// 		cout << count << endl;
		cout << st.size() << endl;
	}
}