#include<bits/stdc++.h>
using namespace std;

bool prime(int p){
	int i;
	for(int i=2;i<p;i++){
		if(p%i == 0) break;
	}
	if( i == p) return true;
	else return false;
}
int main(){
	string temp="aeiou";
	string s;
	int n,k=0; cin >> n;
	if(n<36) cout << "-1" << endl;
	else{
		if(prime(n)) cout << "-1" << endl;
		else{
			int q=n/7;
			for(int i=0;i<q;i++){
				s=s+temp;
			}
			for(int i=0;i<n%7;i++){
				s=s+temp[k];
				k=(k+1)%7;
			}
		}
	}
	cout << s << endl;
}