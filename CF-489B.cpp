#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, ans = 0; cin >> n;
    int b[n];
    int dp[109] = {0};
    for (int i = 0; i < n; i++) cin >> b[i];
    int m; cin >> m;
    int g[m];
    for (int i = 0; i < m; i++) cin >> g[i];
    sort(b, b + n);
    sort(g, g + m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(b[i] - g[j]) <= 1 && !dp[j]) {ans++; dp[j] = 1; break;}
        }
    }
    cout << ans << endl;

}