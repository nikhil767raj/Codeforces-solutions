#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        int elem; cin >> elem;
        if (elem % 2 == 0) cout << elem / 2 << endl;
        else {
            if (ok) {
                ok = false;
                cout << (elem + 1) / 2 << endl;
            }
            else {
                ok = true;
                cout << (elem - 1) / 2 << endl;
            }
        }
    }
}