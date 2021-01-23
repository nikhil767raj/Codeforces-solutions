#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, ev = 0, od = 0, x, ans = 0, j = 0; cin >> n >> k;
    vector<int> v(k);
    for (int i = 0; i < n; i++) {
        cin >> x;
        v[x % k]++;
    }
    ans = v[0] / 2;
    if (k % 2 == 0) {
        ans = ans + (v[k / 2] / 2);
    }
    for (int i = 1; i < (k + 1) / 2; i++) {
        j = k - i;
        ans = ans + min(v[i], v[j]);
    }
    cout << ans * 2 << endl;



}