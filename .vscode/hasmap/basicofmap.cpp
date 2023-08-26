#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    unordered_map<string,int>m;
    // insertion
    //1
    pair<string,int>p=make_pair("hariom",4);
    m.insert(p);
    //2
    pair<string,int>pair2("sujit",2);
    m.insert(pair2);

    //
    m["babbar"]=1;

    m["babbar"]=2;
    m["babbar"]=2;

    //search
    cout<<m["babbar"]<<endl;
    cout<<m.at("hariom")<<endl;
    //size 4
    cout<<m["rohit"]<<endl;//if key does't present in map then it will create entery with 0
    cout<<m.at("rohit")<<endl;//output will be zero because above line has already created the entry of this (rohit) key with zero
  //  cout<<m.at("mahi")<<endl;
     //size
     cout<<m.size()<<endl;
     cout<<m.count("hariom")<<endl;//key is present 
     cout<<m.count("bro")<<endl;//key is not present
     m.erase("hariom");
     cout<<m.size()<<endl;
}