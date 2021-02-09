#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k = 0, inc = 0; cin >> n;
    vector < int > v;
    map < int , int > mp;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
        mp[elem]++;
    }
    vector < int > vt;
    for (int i = 0; i < 31; i++) {
        int z = pow(2, k);
        vt.push_back(z);
        k++;
    }
    bool ok = true;
    for (int i = 0; i < n; i++) {
        ok = true;
        for (int j = 0; j < 31; j++) {
            int x = vt[j] - v[i];
            if (mp.count(x) &&  (mp[x] >= 2 || (mp[x] == 1 && x != v[i]))) ok = false;
        }
        if (ok) inc++;
    }
    cout << inc << endl;
    return 0;
}