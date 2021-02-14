#include<bits/stdc++.h>
using namespace std;
void check(string &s , const string &c) {
    auto pos = s.find(c);
    if (pos == string::npos) {
        cout << "-1" << endl;
        exit(0);
    }
    s.erase(0, pos + 1);
}
int main() {
    string s; cin >> s;
    int sum = 0;
    check(s, "[");
    check(s, ":");
    reverse(s.begin(), s.end());
    check(s, "]");
    check(s, ":");
    cout << count(s.begin() , s.end(), '|') + 4 << endl;

}