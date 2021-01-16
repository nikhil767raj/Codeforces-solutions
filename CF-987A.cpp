#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    string ar[n];
    cout << 6 - n << endl;
    map<string, string>mp;
    mp.insert({"red", "Reality"});
    mp.insert({"purple", "Power"});
    mp.insert({"green", "Time"});
    mp.insert({"blue", "Space"});
    mp.insert({"orange", "Soul"});
    mp.insert({"yellow", "Mind"});
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++) {
        if (ar[i] == "red") {
            mp["red"] = "*";

        }
        else if (ar[i] == "purple") {
            mp["purple"] = "*";

        }
        else if (ar[i] == "orange") {
            mp["orange"] = "*";

        }
        else if (ar[i] == "yellow") {
            mp["yellow"] = "*";

        }
        else if (ar[i] == "blue") {
            mp["blue"] = "*";
        }
        else if (ar[i] == "green") {
            mp["green"] = "*";

        }
    }

    int k = 0;
//     cout << 6-n << endl;
//     // if(k == 6-n) { return 0;}
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        // k++;
        if (itr->first != "*") cout << itr->second  << endl;
        else k++;
    }
    cout << mp.size() << endl;
//  cout << k << endl;

}
