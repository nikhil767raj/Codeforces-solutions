// This code is written by Nikhil Raj
// Contact:-- nikhil767raj@gmail.com
//--------------------------------------------

#include<bits/stdc++.h>
using namespace std;
#define ll       		 long long int
#define nl       		 endl
#define mod              100000007
#define inf              1e9

void nikhil() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool power(ll x)   return (x != 0) && ((x & (x - 1)) == 0);

bool prime(ll p){
	for(ll i =0;i<=sqrt(p);i++)
		if(p%i == 0) return false;
	return true;
}

int main() {
	nikhil();
	
return 0;
}