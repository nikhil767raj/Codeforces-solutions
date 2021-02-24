#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, count = 0, inc = 0; cin >> n;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i] == v[i + 1]) inc++;
            else {
                count = count + inc + 1;
                inc = 0;
            }
        }
        cout << count << endl;
    }
}