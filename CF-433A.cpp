#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int sum=0,hun=0,two=0;
	while(n--){
		int x; cin >> x;
		if(x==100) {
			sum=sum+100;
			hun++;
		}
		else two++;
	}
	if(sum%2 == 0 && hun%2 == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

}