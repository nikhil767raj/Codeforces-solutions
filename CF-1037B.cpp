#include<bits/stdc++.h>
using namespace std;
#define ll         long long
int main() {
    ll n, s, sum = 0; cin >> n >> s;
    vector < ll > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    int mid = v.size() / 2;
    sort(v.begin(), v.end());
    if (v[v.size() / 2] == s) {
        cout << 0 << endl;
        return 0;
    }
    if (v[mid] < s && s <= v[mid + 1] || (v[mid] > s && s >= v[mid - 1])) {
        cout << abs(s - v[mid]) << endl;
        return 0;
    }
    if (v[mid] < s) {
        for (int i = mid; i < v.size(); i++) {
            if (s >= v[i]) {
                sum = sum + abs(v[i] - s);
            }
            else break;
        }
        // return 0;
    }
    if (v[mid] > s) {
        for (int i = mid; i >= 0; i = i - 1) {
            if (s <= v[i]) sum = sum + abs(s - v[i]);
            else break;
        }
    }
    cout << sum << endl;
}