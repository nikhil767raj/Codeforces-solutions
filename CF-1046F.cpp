#include<bits/stdc++.h>
using namespace std;
#define ll   long long
int main() {
   int n; cin >> n;
   vector < ll > v;
   for (int i = 0; i < n; i++) {
      ll elem; cin >> elem;
      v.push_back(elem);
   }
   ll s, f, z, trans = 0; cin >> s >> f;
   z = f + s;
   for (ll i = 0; i < n; i++) {
      if (v[i] > s) {
         if (z >= v[i]) {
            trans += f;
            continue;
         }
         if (v[i] % z > s) trans += (v[i] / z) * f + f;
         else trans += (v[i] / z) * f;
      }
   }
   cout << trans << endl;
}