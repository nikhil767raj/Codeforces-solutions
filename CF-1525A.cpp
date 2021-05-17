#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
int main() {
   int T; cin >> T;
   while (T--) {
      int k; cin >> k;
      int h = 100;
      for (int i = 2; i <= 100; i++) {
         if (k % i == 0 && h % i == 0) {
            k = k / i;
            h = h / i;
            i--;
         }
         else continue;
      }
      cout << h << endl;
   }
   return 0;
}