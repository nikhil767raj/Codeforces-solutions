#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, k, count = 0; cin >> n >> k;
   bool ok = false;
   int time_left = 240 - k;
   for (int i = 1; i <= n; i++) {

      time_left = time_left - (5 * i);
      if (time_left >= 0) count++;
      else {
         cout << count << endl;
         return 0;
      }
   }
   cout << count << endl;
}