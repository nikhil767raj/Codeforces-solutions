#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main() {
  ll n, cnt = 0, bef = 0, aft = 0; cin >> n;
  vector < ll > v, vk;
  for (ll i = 0; i < n; i++) {
    ll elem; cin >> elem;
    v.push_back(elem);
  }
  map < ll , ll > mp;
  for (ll i = 0; i < n; i++) {
    if (v[i] > 0) {
      if (mp.count(v[i])) {
        if (mp[v[i]] == 0) {
          cout << "-1" << endl;
          return 0;
        }
      }
      mp[v[i]] = 1;
      bef++;
    }
    else {
      if (mp.count(-1 * v[i]) && mp[-1 * v[i]] != 0) {
        mp[-1 * v[i]] = 0;
        //  mp.erase(v[i]);
        aft++;
        //  cout << "Ff" << endl;
      }
      else {
        cout << "-1" << endl;
        return 0;
      }
    }
    if (bef == aft) {
      vk.push_back(bef + aft);
      bef = 0, aft = 0;
      mp.clear();
      //  map < ll , ll > mp;
    }
  }
  if (mp.size() > 0) {
    cout << "-1" << endl;
    return 0;
  }
  cout << vk.size() << endl;
  for (auto i : vk) cout << i << " "; cout << endl;
  return 0;
}