#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, left, right; cin >> n;
        vector < int > v;
        unordered_map < int , int > mp;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
            mp[elem] = i;
        }
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                left = mp[i];
                right = mp[i];
                cout << "1";
            }
            else if (left > mp[i]) {
                if (abs(right - mp[i]) + 1 == i) cout << "1";
                else cout << "0";
                left = mp[i];
            }
            else if (right < mp[i]) {
                if (abs(mp[i] - left) + 1 == i) cout << "1";
                else cout << "0";
                right = mp[i];
            }
            else {
                if (abs(right - left) + 1 == i) cout << "1";
                else cout << "0";
            }
        }
        cout << endl;
    }
}