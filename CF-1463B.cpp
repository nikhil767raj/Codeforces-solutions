#include<bits/stdc++.h>
using namespace std;
#define ll     long long
int main() {
   int T; cin >> T;
   while (T--) {
      ll n, sum = 0; cin >> n;
      vector < ll > v(n);
      vector < ll > vk;
      for (auto &i : v) {cin >> i; sum += i;}

      ll ev[32];
      for (int i = 0; i < 32; i++) {
         ev[i] = pow(2, i);
      }
      // for(int i=0;i<32;i++) cout << ev[i]<< " ";
      for (int i = 0; i < n; i++) {
         ll x = v[i];
         for (int j = 0; j < 32; j++) {
            if (x == ev[j]) {vk.push_back(ev[j]); break;}
            else if (x < ev[j]) {vk.push_back(ev[j - 1]); break;}
            // else {vk.push_back(ev[j]); break;}
         }
      }
      for (auto i : vk) cout << i << " "; cout << endl;
   }
}