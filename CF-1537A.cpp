#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main() {
   int t; cin >> t;
   while (t--) {
      int n, sum = 0; cin >> n;
      vector < int > v;
      for (int i = 0; i < n; i++) {
         int elem; cin >> elem;
         v.push_back(elem);
         sum += elem;
      }
      int z = sum - n;
      if (z >= 0) {
         cout << z << endl;
      }
      else {
         cout << 1 << endl;
      }
   }
   return 0;
}