#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
  int n, x = 0; cin >> n;
  vector < int >v;
  string s = "";
  for (int i = 0; i < n; i++) {
    int elem; cin >> elem;
    v.push_back(elem);
  }
  int j = n - 1;
  int i = 0;
  x = INT_MIN;
  while (1) {
    if (v[i] > x || v[j] > x) {
      if (v[i] < v[j] && x < v[i]) {
        x = v[i];
        s = s + "L";
        i++;
      }
      else if (v[j] < v[i] && x < v[j]) {
        x = v[j];
        j--;
        s = s + "R";
      }
      else if (v[i] > x) {
        x = v[i];
        s = s + "L";
        i++;
      }
      else if (v[j] > x) {
        x = v[j];
        s = s + "R";
        j--;
      }

    }
    else break;
    if (j < i) break;
  }
  cout << s.length() << endl;
  cout << s << endl;
}