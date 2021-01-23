#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, mx = -1; cin >> n;
    map<int, int>mp;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
    }
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            mp[v[i] + v[j]]++;
        }
    }
    for (auto i : mp) {
        mx = max(mx, i.second);
    }
    cout << mx << endl;
    return 0;
}