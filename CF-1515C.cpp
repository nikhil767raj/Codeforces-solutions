#include<bits/stdc++.h>
using namespace std;
#define ll    long long
int main() {
  int t; cin >> t;
  while (t--) {
    int n, m, x, j = 1; cin >> n >> m >> x;
    vector < int > v;
    vector < int > vt;
    map < int , stack<int> > mp;
    for (int i = 0; i < n; i++) {
      int elem; cin >> elem;
      v.push_back(elem);
      vt.push_back(elem);
    }
    sort(vt.begin(), vt.end());

    for (int i = 0; i < n; i++) {
      mp[vt[i]].push(j);
      j++;
      if (j > m) j = 1;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++) {
      cout << mp[v[i]].top() << " ";
      mp[v[i]].pop();
    }
    cout << endl;

  }
  return 0;
}