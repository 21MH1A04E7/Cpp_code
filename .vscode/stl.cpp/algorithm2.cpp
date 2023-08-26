#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //lambda funtion  
    //we pass third parameter in the form of lambda funtion
    //syntax of lambda funtion
   // [](int x){return x+2;};//this is called lambda funtion
    //sqare_bracket passing_variable  return _value
    cout<<[](int x){return x+2;} (4)<<endl;//calling function with 2 parameter
    cout<<[](int x,int y){return x+y;}(2,5)<<endl;//lambda funtion
    auto mul=[](int x,int y){return x*y;};//assigned
    cout<<mul(7,3);
}