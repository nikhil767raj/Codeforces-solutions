#include<bits/stdc++.h>
using namespace std;
int main() {
	string s; cin >> s;
	string str; cin >> str;
	bool possible = true;
	int count=0;
	
	int freq[26] = {0}, freqq[26] = {0};
	if(s.length()!=str.length()){cout << "NO" << endl; return 0;}
	for (int i = 0; i < s.length(); i++)   freq[s[i] - 'a']++;
	for (int i = 0; i < str.length(); i++) freqq[str[i] - 'a']++;
    for(int i=0;i<26;i++){
    	if(freq[i] == freqq[i]) continue;
    	else{
    		cout << "NO" << endl;
    		return 0;
    	}
    }
	for(int i=0;i<s.length();i++){
		if(s[i] == str[i]) continue;
		else count++;
	}
	if(count == 2) cout << "YES" << endl;
	else cout << "NO" << endl;
}
