// Dynamic memory allocation in C++
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	int *ptr;
	
// 	cout << "Enter number of values you want to store";
	cin >> size;
	
	ptr=new int[size];
	
	for(int i=0;i<size;i++){
	    cin >> ptr[i];
	}
	for(int i=0;i<size;i++){
	    cout << ptr[i];
	}
	
	return 0;
}
