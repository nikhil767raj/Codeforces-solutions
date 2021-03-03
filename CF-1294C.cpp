#include<bits/stdc++.h>
using namespace std;
int main() {
   int t; cin >> t;
   while (t--) {
      int n; cin >> n;
      set < int > s;
      for (int i = 2; i * i <= (n); i++) {
         if (n % i == 0 && !s.count(i)) {
            n = n / i;
            s.insert(i);
            break;
         }
      }
      for (int i = 2; i * i <= (n); i++) {
         if (n % i == 0 && !s.count(i)) {
            n = n / i;
            s.insert(i);
            break;
         }
      }
      if (n == 1 || s.size() < 2 || s.count(n))cout << "NO" << endl;
      else {
         cout << "YES" << endl;
         cout << n << " ";
         for (auto i : s) {
            cout << i << " ";
         }
         cout << endl;
      }
   }
}