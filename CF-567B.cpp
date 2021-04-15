#include<bits/stdc++.h>
using namespace std;
#define ll     long long
int main() {
    ll t, n, m, ans = 0, state = 0; cin >> t;
    ll ar[1000000];
    while (t--) {
        char c; ll m; cin >> c >> m;
        if (c == '+') {
            ar[m] = 1;
            state++;
        }
        else {
            if (ar[m] == 1) {
                state--;
            }
            else ans++;
        }
        ans = max(ans, state);
    }
    cout << ans << endl;
    return 0;
}