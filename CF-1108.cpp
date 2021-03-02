#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	string s; cin >> s;

	vector < int > v(3);
	iota(v.begin(),v.end(),0);

	string clr="RGB";
	string ans="";
	int mx=1e9;

	do{
		string t;
		int count=0;
		for(int i=0;i<n;i++){
			t+=clr[v[i%3]];
			count+=t[i] != s[i];
		}
		if(mx>count){
			mx=count;
			ans=t;
		}
	} 
	while(next_permutation(v.begin(),v.end()));
	cout << mx << endl << ans << endl;
}