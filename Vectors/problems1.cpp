//Take input from the user ,store in vector and print the elements in reverse order

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    //user input
    int n;;
    cin>>n;
    //create the vector v and type of elements as integer
    vector<int> v;
    for(int i= 0; i< n; i++){
        int x; // elements inside the list
        cin >> x;
         v.push_back(x); // pusing every element inside vector v
    }
    cout <<" elements that you entered: ";
    for(auto i :v )
      cout  << i << "  ";
    cout << endl;
    //reversing the vector v
  cout << "Reverse order: ";
  for(int i= v.size(); i>0; i--){
    cout << v[i-1] << "  ";

  }
  return 0;
}