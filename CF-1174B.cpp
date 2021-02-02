#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, ev = 0, od = 0; cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        if (elem % 2 == 0) ev++;
        else od++;
        v.push_back(elem);
    }
    if (od == n || ev == n) {
        for (auto i : v) cout << i << " ";
        cout << endl;
    }
    else {
        sort(v.begin(), v.end());
        for (auto i : v) cout << i << " ";
        cout << endl;

    }
}