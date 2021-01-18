#include<bits/stdc++.h>
using namespace std;
#define ll       long long
int main() {
   int t; cin >> t;
   while (t--) {
      ll n, x, mn = 0, mr = 0; cin >> n >> x;
      ll ar[n];
      for (int i = 0; i < n; i++) cin >> ar[i];
      for (int i = 0; i < n; i++) {
         mn = mn + ar[i];
         if (ar[i] % x != 0) mr = mr + ar[i] / x + 1;
         else mr = mr + ar[i] / x;
      }
      if (mn % x != 0) mn = mn / x + 1;
      else mn = mn / x;
      cout << mn << " " << mr << endl;
   }
}