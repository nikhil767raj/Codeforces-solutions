#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    ll cop, org; cin >> cop >> org;
    if (org == cop) {
        cout << "NO" << endl;
    }
    else if (org > cop) {
        if (org - 1 == cop ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        if (org == 0 || org == 1) {cout << "NO" << endl; return 0;}
        cop = cop - (org - 1);
        if (cop % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}