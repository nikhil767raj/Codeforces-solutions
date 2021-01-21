#include<bits/stdc++.h>
using namespace std;
#define ll            long long int
int main() {
   int t; cin >> t;
   while (t--) {
      ll n; cin >> n;
      string s; cin >> s;
      string ck = "1";
      // string ck="1";
      for (ll i = 1; i < s.length(); i++) {
         if (s[i - 1] == '0' && s[i] == '1') {
            ck = ck + "1";
         }
         else if (s[i - 1] == '1' && s[i] == '0') {
            if (ck.back() == '0') {
               ck = ck + "0";
            }
            else {
               ck = ck + "1";

            }
         }
         else {
            if (ck.back() == '0') {
               ck = ck + "1";
            }
            else {
               ck = ck + "0";
            }
         }
      }
      cout << ck << endl;
   }
}