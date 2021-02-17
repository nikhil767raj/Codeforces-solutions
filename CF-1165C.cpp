#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, count = 0; cin >> n;
    string s; cin >> s;
    int k = s.length();
    for (int i = 0; i < k; i++) {
        if (s[i] != s[i + 1]) {i++;}
        else {
            count++;
            s.erase(i + 1, 1);
            k--;
            i--;
        }
    }
    if (k % 2 == 0) {
        cout << count << endl;
        cout << s << endl;
    }
    else {
        cout << count + 1 << endl;
        s.erase(s.length() - 1, 1);
        cout << s << endl;
    }
}