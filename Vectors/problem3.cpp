// Take N numbers as input in a vector and print only even numbers
/* pseudo-
user input - n (i.e size of an vector)
elements of vector - x
push_back()
if(cond_statement for even numbers)
for loops twice
cout << even no
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
   
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
           
    }
      cout << "Even numbers from the vector: ";
    for(auto i:v)
     if(i%2==0){
      
        cout << i << "  ";
     }
    
    return 0;
}