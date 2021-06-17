#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      cout << 2 << endl;
      int z = n - 1;
      int avg = n;
      while (z > 0) {
         cout << z << " " << avg << endl;
         avg = (z + avg + 1) / 2;
         z--;
      }
   }
}