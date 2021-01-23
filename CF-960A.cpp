#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin >> s;
    int freq[26] = {0};
    if (s[0] == 'b' || s[s.length() - 1] != 'c' || s[0] == 'c') {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < s.length(); i++) {

        freq[s[i] - 'a']++;
        if (i == 0) continue;
        else {
            if (s[i] >= s[i - 1]) continue;
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    if ((freq[0] == freq[2] || freq[1] == freq[2]) && (freq[0] != 0 && freq[1] != 0 && freq[2] != 0))
        cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
}