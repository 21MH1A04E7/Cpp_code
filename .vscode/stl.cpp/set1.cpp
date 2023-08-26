#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
    for(string value:s){
        cout<<value<<endl;
    }
    for(auto it=s.begin();it!=s.end();it++){
      cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main(){
    set<string>s;//it store the data in sorted order and it store unique value
    s.insert("abc");//time complexity of insertion is log(n)
    s.insert("dhd");
    s.insert("hdid");
    s.insert("abc");
    auto it=s.find("abc");//finding the value;
    if(it!=s.end()){
        cout<<"abc is present in our set "<<" "<<endl;//finding the element
    }
    /*if(it!=s.end()){
        s.erase(it);//it is taking iterator but i can give directly value
    }*/
    s.erase("dhd");//giving directly value
    print(s);
}