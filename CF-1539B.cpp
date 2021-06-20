#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
   char c = 'a';
   char ar[27];
   map < char , ll >mp;
   for (int i = 1; i <= 26; i++) {
      mp[c] = i;
      c++;
   }
   ll n, q; cin >> n >> q;
   string s; cin >> s;
   int pre[n] = {0};
   pre[0] = mp[s[0]];
   for (int i = 1; i < n; i++) {
      pre[i] = pre[i - 1] + mp[s[i]];
   }
   while (q--) {
      ll l, r, sum = 0; cin >> l >> r;
      l--;  r--;
      sum = pre[r] - pre[l] + mp[s[l]];
      cout << sum << endl;
   }
   return 0;
}