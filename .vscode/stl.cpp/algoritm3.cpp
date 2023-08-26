#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x>0;
}
int main(){
    
    vector<int>v={2,3,-8};
    cout<<all_of(v.begin(),v.end(),
    //if any one condition is false the output wil be false
    [](int x){return x>0;})<<endl;//chacking all element is positive or not
    cout<<all_of(v.begin(),v.end(),is_positive)<<endl;//here using normal funtion
    //any one:: any one codition is true the output will be true
    cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    //no one condition will be match the it will return false
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
}