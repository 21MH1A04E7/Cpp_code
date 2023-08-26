#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string>s;//declaration of multiset
    s.insert("abc");//we can store duplicate value in multiset
    s.insert("def");//time complexity o(log(n))
    s.insert("adc");//it will store in sorted ordered
    s.insert("abc");
    s.insert("fgf");
    for(auto it:s)
    cout<<it<<endl;
    auto it=s.find("acb");//it will return iterator of first value
    
}