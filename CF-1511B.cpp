#include<bits/stdc++.h>
using namespace std;
bool countDigits(int z, int a) {
   string s = to_string(z);
   if (s.length() == a) return true;
   else return false;
}
int main() {
   int t; cin >> t;
   while (t--) {
      int a, b, c; cin >> a >> b >> c;
      vector < int > v{7, 13, 101, 1009, 10007, 100003, 1000003, 10000019, 100030001};
      int z = v[c - 1], x = v[c - 1];
      while (1) {
         // cout << z << " " << a << endl;
         if (countDigits(z, a)) break;
         else z = z * 2;
      }
      while (1) {
         if (countDigits(x, b)) break;
         else x = x * 3;
      }
      cout << z << " " << x << endl;
      // cout << __gcd(106496,255879) << "m" << endl;
   }
}