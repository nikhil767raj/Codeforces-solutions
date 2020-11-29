#include<bits/stdc++.h>
using namespace std;
int main(){
	string str[5]={"Danil","Olya","Slava","Ann","Nikita"};
	string s; cin >> s;
	int count=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<s.size();j++){
			if(s.substr(j,str[i].size()) == str[i])
				count++;
			else continue;
		}
	}
	if(count == 1) cout << "YES" << endl;
	else cout << "NO" << endl;
}