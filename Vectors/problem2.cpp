//Problem 2- Sum of even number in vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    //user input
    int n;
    cin >> n;

    vector<int> v;
    for(int i=0; i<5; i++){
        int x;
        cin >> x;
        v.push_back(x); 
    }
    int sum = 0;
    for(auto i:v)
    if(i%2==0){
        sum += i;
    }
    cout <<"Sum of even numbers: " << sum;
    cout<< endl;
    


    return 0;

}
