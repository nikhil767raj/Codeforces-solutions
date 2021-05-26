#include<bits/stdc++.h>
using namespace std;
bool power(int x) {
   return ((x != 0) && ((x & (x - 1)) == 0));
}
int main() {
   int t; cin >> t;
   while (t--) {
      int n, ev = 0, od = 0; cin >> n;
      int m = n;
      if (n == 1) {
         cout << "FastestFinger" << endl;
         continue;
      }
      else if (n % 2 != 0 || n == 2) {
         cout << "Ashishgup" << endl;
         continue;
      }
      else {
         if (power(n)) {
            // cout << "mmm" << endl;
            cout << "FastestFinger" << endl;
            continue;
         }
         while (n > 0) {
            if (n % 2 == 0) {ev++; n = n / 2;}
            else break;
         }
         for (int i = 2; i <= sqrt(m); i++) {
            if (m % i == 0) od++;
         }
         // c
         if (ev == 1) {
            // cout << "meet" << endl;
            if (od == 1) cout << "FastestFinger" << endl;
            else cout << "Ashishgup" << endl;
         }
         else cout << "Ashishgup" << endl;
      }
   }
}