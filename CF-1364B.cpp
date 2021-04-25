#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
  int t; cin >> t;
  while (t--) {
    int n, k = 0; cin >> n;
    vector < int > v, vt;
    for (int i = 0; i < n; i++) {
      int elem; cin >> elem;
      v.push_back(elem);
    }
    vt.push_back(v[0]);
    k = 2;
    int j = 0;
    for (int i = 1; i < n - 1; i++) {
      if (v[i] > v[j] && v[i] > v[i + 1]) {
        k++;
        vt.push_back(v[i]);
        j = i;
      }
      else if (v[i] < v[j] && v[i] < v[i + 1]) {
        k++;
        vt.push_back(v[i]);
        j = i;
      }
      else continue;
    }
    vt.push_back(v[n - 1]);
    cout << k << endl;
    for (int i = 0; i < vt.size(); i++) cout << vt[i] << " "; cout << endl;
  }

}