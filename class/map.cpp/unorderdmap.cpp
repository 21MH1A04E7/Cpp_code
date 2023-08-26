#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>m;//unorderde map
    //it will not maintain the orderd
    //here has table uses 
    //timecompexity o(1);
    //m.find(7);
    //m.erase();
    m[1]=1;
    m[5]=7;
    m[3]=10;
    unordered_map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}