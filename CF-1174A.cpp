#include<bits/stdc++.h>
using namespace std;
int main() {

  int n, total = 0, sum = 0; cin >> n;
  vector < int > v;
  for (int i = 0; i < 2 * n; i++) {
    int elem; cin >> elem;
    v.push_back(elem);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    if (i < v.size() / 2) {
      sum = sum + v[i];
    }
    else {
      total = total + v[i];
    }
  }
  if (sum == total) cout << "-1" << endl;
  else {
    for (auto i : v)
      cout << i << " ";
    cout << endl;
  }
}