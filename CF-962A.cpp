#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, ck = 0, sum = 0; cin >> n;
    vector < int > v;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
        sum = sum + elem;
    }
    if (sum % 2 != 0) sum = sum + 1;
    for (int i = 0; i < n; i++) {
        ck = ck + v[i];
        if (ck >= sum / 2) {
            cout << i + 1 << endl;
            break;
        }
    }
}