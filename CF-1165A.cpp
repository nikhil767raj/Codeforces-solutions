#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y; cin >> n >> x >> y;
	string s; cin >> s;
	int sum =x+y;
	int ans;
	if(y==0){
		if(s[s.length()-1] == 1) return 0;
		else  return 1;
	}
	for(int i=s.length()-1;i>=0;i++){
		if(s[i] == 0) sum=sum-1;
		else{
			s[i] =0;
			ans=ans+1;
			sum=sum-1;
		}
		if(sum == 0) break;
		else continue;
	}
	cout << ans << endl;
return 0;
}