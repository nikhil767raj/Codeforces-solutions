#include<bits/stdc++.h>
using namespace std;
#define ll    long long int
int main() {
    int n, x, y, count = 0, z; cin >> n;
    string s; cin >> s;
    vector < int > v;
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '.') v.push_back(i + 1);

    if (v.size() < 4) {
        cout << "no" << endl;
        return 0;
    }
    for (int i = 0; i < v.size() - 4; i++) {
        x = v[i];
        for (int k = i + 1; k < v.size(); k++) {
            y = abs(v[k] - x);
            z = v[k];
            count = 1;
            for (int j = i + 2; j < v.size(); j++) {
                if (v[j] - z == y) {z = v[j]; count++;}
                if (count == 4) {
                    cout << "yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "no" << endl;
    return 0;
}