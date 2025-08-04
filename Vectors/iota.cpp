//keep learning babes;-) and I m about to done with be these topics
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(5);
    iota(v.begin(),v.end(), 15);// takes consecutive  values
    for(auto i : v)
    cout<<i<<"  ";
    return 0;

}
