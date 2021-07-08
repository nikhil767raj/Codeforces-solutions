#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, t, c, mx = 0, total = 0; cin >> n >> t >> c;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    for (int i = 0; i < n; i++) {
        if (v[i] <= t)  mx++;
        else {
            if (mx >= c) {
                total += (mx - c + 1);
                mx = 0;
            }
            else mx = 0;
        }
    }
    if (mx >= c) {
        total += (mx - c + 1);
        mx = 0;
    }
    cout << total << endl;
}