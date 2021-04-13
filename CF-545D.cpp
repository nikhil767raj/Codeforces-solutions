#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
  ll n, count = 0, sum = 0; cin >> n;
  vector < ll > v;
  for (ll i = 0; i < n; i++) {
    ll elem; cin >> elem;
    v.push_back(elem);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (v[i] >= sum) {
      sum = sum + v[i];
    }
    else count++;
  }
  cout << v.size() - count << endl;
  return 0;
}