#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, m, a, b, mn = INT_MAX; cin >> n >> m >> a >> b;
   if (n <= m) {
      cout << min(n * a, b) << endl;
      return 0;
   }
   int z = n / m;
   for (int i = 1; i <= z; i++) {
      mn = min(i * b + ((n - (m * i)) * a), n * a);
   }
   if (n % m != 0) {
      mn = min((z + 1) * b, mn);
   }
   cout << mn << endl;
}