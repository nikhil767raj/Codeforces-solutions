#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, count = 0, mnn, mn = INT_MAX, t; cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    for ( t = 1; t <= 101; t++) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == t || abs(v[i] - t) == 1) continue;
            else {
                count = count + abs(v[i] - t) - 1;
            }
        }
        // cout << count << " " << t << endl;//
        if (count < mn) {mn = count; mnn = t;}
        count = 0;
    }
    cout << mnn << " " << mn << endl;

}