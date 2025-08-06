#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;;
    cin>>n;
    vector<int> v;
    for(int i= 0; i< n; i++){
        int x;
        cin >> x;
         v.push_back(x); 
        
      
    }
    cout <<" elements that you entered: ";
    for(auto i :v )
      cout  << i << "  ";
    cout << endl;
  cout << "Reverse order: ";
  for(int i= v.size(); i>0; i--){
    cout << v[i-1] << "  ";
  }
  return 0;
}