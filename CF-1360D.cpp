#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    int n, k, mn; cin >> n >> k;
    mn = n;
    if (n <= k) {
      cout << 1 << endl;
    }
    else {
      for (int j = 2; j * j <= n; j++) {
        if (n % j == 0) {
          if (j <= k) mn = min(mn, n / j);
          if (n / j <= k) mn = min(mn, j);
        }
      }
      cout << mn << endl;
    }
  }
}