#include<bits/stdc++.h>
using namespace std;
#define ll      long long int
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool ok = true, ck = false, pk = true, fault = true;
        vector < int > v;
        for (int i = 0; i < n; i++) {
            int elem; cin >> elem;
            v.push_back(elem);
        }
        int tca = 0, tcb = 0, ca = 0, cb = 0, i = 0, j = v.size(), count = 0;
        while (1) {
            if (ok) {
                if (j < i) {if (pk) count++; break;}
                ca = ca + v[i];
                tca = tca + v[i];
                //   cout << "tca" << " " << tca  << endl;
                if (ca > cb) {pk = false; count++; cb = 0; ok = false; i++;}
                else {pk = true; i++;}
            }
            else {
                //  if(j>=i) continue;
                if (fault) {j = v.size() - 1; fault = false;}
                if (j < i) {if (ck)count++; break;}
                cb = cb + v[j];
                tcb = tcb + v[j];
                //  cout << "tcb" << " " << tcb  << endl;
                if (cb > ca) {ck = false; count++; ok = true; ca = 0; j--;}
                else {ck = true; j--;}

            }
        }
        cout << count << " " << tca << " " << tcb << endl;
    }
    return 0;
}