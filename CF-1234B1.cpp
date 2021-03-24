#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, p = 0; cin >> n >> k;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        if (p == k) {
            if (find(v.begin(), v.end(), elem) != v.end()) {
                continue;
            }
            else {
                v.insert(v.begin(), elem);
            }
            v.pop_back();
        }
        if (i == 0) {
            v.insert(v.begin(), elem);
            p++;
            continue;
        }
        else if (find(v.begin(), v.end(), elem) != v.end()) {
            continue;
        }
        else {
            v.insert(v.begin(), elem);
            p++;
        }
    }
    cout << v.size() << endl;
    for (auto i : v) cout << i << " ";
    cout << endl;

}