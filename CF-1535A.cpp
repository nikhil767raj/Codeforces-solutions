#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
   int t; cin >> t;
   while (t--) {
      int a, b, c, d; cin >> a >> b >> c >> d;
      int mxa = max(a, b);
      int mxb = max(c, d);
      int ar[4] = {a, b, c, d};
      sort(ar, ar + 4, greater<int>());
      int mxx = ar[0];
      int mxy = ar[1];
      if (mxa == mxx) {
         if (mxb == mxy) {
            cout << "YES" << endl;
         }
         else cout << "NO" << endl;
      }
      else if (mxa == mxy) {
         if (mxb == mxx) {
            cout << "YES" << endl;
         }
         else cout << "NO" << endl;
      }
      else cout << "NO" << endl;
   }
}