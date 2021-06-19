// Modifiers in vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
// Ways of defining vector
  vector<int> v;                     // Assign vector
  vector < int > v(n);               // Assign vector with size n
  vector<int>v, vz                   // Assigning multiple vector



// Taking Input in our vector 
  for(int i=0;i<n;i++){
    int elem; cin >> elem;
    v.push_back(elem);
  }
  // OR
  for(auto &i:v) cin >> i;          // when the size of vector is known


// Printing the output from our vector 
    for(auto i:v) cout << i << " ";
    // OR
    for(int i=0;i<n;i++) cout << v[i] << " ";
    //OR
    for(auto i=v.begin();i != v.end();i++) cout << *i << " ";


// Functions:--
    v.pop_back();                     // removes last element
    v.erase(vec.begin());             // erase the vector
    v.insert(vec.begin(), 10);        // inserts 10 at the beginning
    v.insert(v.begin() + j, 76);     // Inserts 76 at jth index 
    sort(v.begin(),v.end())          // Ascending order




v.erase(unique(v.begin(),v.end()),v.end());         // It deletes duplicates from vector
sort(v.begin(),v.end(),greater<int>())              // Descending order
v.erase(v.begin()+4);                               // Erases the element present at 4th index of the vector v
v.erase(v.begin() + 2, v.begin() + 5);              // (erases all the elements from the 2nd index to the fifth-1 idx
    for (auto i : v) cout << i << ' ';              // here i can be written as int i or auto i
                                                    // auto i automatically signify value of i as vector datatype

}