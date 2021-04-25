#include<bits/stdc++.h>
using namespace std;
#define ll     long long int
int main() {
    int n, k, m; cin >> n >> k >> m;
    vector < int > v;
    vector < int > vt(m);
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        v.push_back(elem);
        vt[elem % m]++;
    }
    for (int i = 0; i < m; i++) {
        if (vt[i] >= k) {
            cout << "Yes" << endl;
            int cnt = 1;
            for (int j = 0; j < n; j++) {
                if (v[j] % m == i && cnt <= k) {
                    cout << v[j] << " ";
                    cnt++;
                }
            }
            return 0;
        }

    }
    cout << "No" << endl;
}