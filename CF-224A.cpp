#include<bits/stdc++.h>
using namespace std;
int main(){
  int sa,sb,sh; cin >> sa >> sb >> sh;
  int a=sqrt((sa*sh)/sb);
  int b=sqrt((sa*sb)/sh);
  int c=sqrt((sb*sh)/sa);
  cout << 4*(a+b+c) << endl;
  return 0;
}