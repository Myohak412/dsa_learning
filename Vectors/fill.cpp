#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    fill(v.begin(),v.end(), 20);

    for(auto i : v)
    cout<<i<<" ";
}