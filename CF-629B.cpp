#include<bits/stdc++.h>
using namespace std;
int main() {
   int t, x, y, mn = 0; cin >> t;
   char c;
   int m[400] = {0};
   int f[400] = {0};
   while (t--) {
      cin >> c >> x >> y;
      if (c == 'M') {
         for (int i = x; i <= y; i++) m[i]++;
      }
      else {
         for (int i = x; i <= y; i++) f[i]++;
      }
   }
   for (int i = 1; i < 400; i++) {
      mn = max(min(f[i], m[i]), mn);
   }
   // for(int i=1;i<367;i++) cout << f[i] << " " << m[i] << endl;
   cout << 2 * mn << endl;
}