#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0; cin >> n;
    string s; cin >> s;
    stack < char > st;
    int bef = 0, aft = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {bef++; st.push('(');}
        else {
            aft++;
            if (st.empty()) {}
            else st.pop();
        }
        if (bef == aft) {
            if (!st.empty()) {
                while (st.empty() == false) st.pop();
                sum += (bef + aft);
            }
            bef = 0; aft = 0;
        }
    }
    if (bef != aft) cout << "-1" << endl;
    else cout << sum << endl;
}