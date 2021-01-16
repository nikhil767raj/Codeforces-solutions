#include<bits/stdc++.h>
using namespace std;
#define ll           long long
int main() {
   ll n; cin >> n;
   vector<ll> v;

   for (int i = 0; i < n; i++) {
      ll elem; cin >> elem;
      v.push_back(elem);
   }

   sort(v.begin(), v.end());

   for (int i = 1; i < v.size() - 1; i++) {
      if (v[i - 1] + v[i] > v[i + 1]) {
         cout << "YES" << endl;
         return 0;
      }


   }
   cout << "NO" << endl;
}