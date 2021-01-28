#include<bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    int q, d; cin >> q >> d;
    int f = d;
    bool ok = true;
    string r = to_string(f);
    int ar[q];
    for (int i = 0; i < q; i++) cin >> ar[i];
    for (int i = 0; i < q; i++) {
      // cout << ar[i] << " ";
      ok = true;
      int z = ar[i];
      int u = z;
      string p = to_string(u);
      if (p.find(r) != string::npos) {
        cout << "YES" << endl;
        ok = false;
        // break;
      }
      else {
        while (z > 0) {
          z = z - d;
          //   cout << z << " ";
          int zz = z;
          string x = to_string(zz);
          if (x.find(r) != string::npos) {
            cout << "YES" << endl;
            ok = false;
            break;
          }
        }
        if (ok) cout << "NO" << endl;
      }
    }

  }
}