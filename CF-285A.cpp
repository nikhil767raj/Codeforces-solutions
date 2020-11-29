#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,j; cin >> n >> k;
	for(int i=k+1;i>=1;i=i-1){
		cout << i << " ";
	}
	for(int i=k+2;i<=n;i++){
		cout << i << " ";
	}
	cout << endl;
}