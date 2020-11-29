#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[3],b[3],c[3];

	for(int i=0;i<3;i++) cin >> a[i];
	for(int i=0;i<3;i++) cin >> b[i];
	for(int i=0;i<3;i++) cin >> c[i];

		for(int i=0;i<10000;i++){
			for(int j=0;j<10000;j++){
				for(int k=0;k<10000;k++){
					if(i+a[1]+a[2] == j+b[0]+b[2] && j+b[0]+b[2] == k+c[0]+c[1]){
						a[0]=i;
						b[1]=j;
						c[2]=k;
					}
					else continue;
				}
			}
		}
		for(int i=0;i<3;i++) cout << a[i] << " ";
			cout << endl;
		for(int i=0;i<3;i++) cout << b[i] << " ";
			cout << endl;
		for(int i=0;i<3;i++) cout << c[i] << " ";
			cout << endl;



}