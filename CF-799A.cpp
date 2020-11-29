#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,k,d; cin >> n >> t >> k >> d;
	if(n%k == 0) bake=n/k;
	else bake=n/k+1;
	int old=bake*t;
	cout << old << endl;
}