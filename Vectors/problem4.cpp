//Take N numbers and print only the odd numbers in reverse order
// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; //user input size
    cout << "Enter the size: ";
    cin >>  n;
    vector<int> v; //create vector v
    for(int i=0; i<n; i++){ 
        int x; //elements inside vector
        cin >> x;
        v.push_back(x); //push elements inside vector
    }
    //for loop for odd numbers from the vector
     for(int i=v.size(); i>=0; i--){
    if(v[i]%2 == 1){
       cout << v[i];
    }
          
        }
        

    
    
    return 0;
}