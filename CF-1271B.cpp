#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string s, st; cin >> s;
    st = s;
    vector < int > v;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'W') continue;
        else if (s[i] == 'B' && s[i + 1] == 'W') {
            swap (s[i], s[i + 1]);
            v.push_back(i);
        }
        else if (s[i] == 'B' && s[i + 1] == 'B') {
            v.push_back(i);
            s[i] = 'W'; s[i + 1] = 'W';
            i++;
        }
    }
    if (s[s.length() - 1] == 'B') {v.clear();}
    else {
        cout << v.size() << endl;
        for (int i : v) cout << i + 1 << " "; cout << endl;
        return 0;
    }
    for (int i = 0; i < st.length() - 1; i++) {
        if (st[i] == 'B') continue;
        else if (st[i] == 'W' && st[i + 1] == 'B') {
            swap(st[i], st[i + 1]);
            v.push_back(i);
        }
        else if (st[i] == 'W' && st[i + 1] == 'W') {
            st[i] = 'B'; st[i + 1] = 'B';
            v.push_back(i);
        }
    }
    if (st[st.length() - 1] == 'W') cout << -1 << endl;
    else {
        cout << v.size() << endl;
        for (int i : v) cout << i + 1 << " "; cout << endl;
    }
}
