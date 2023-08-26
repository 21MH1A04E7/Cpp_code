#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>mp;//unordered map
    mp[1]="abc";//it will not maintaine any order
    mp[2]="def";//we can't use any complex dataypes
    // 
    mp[5]="edf";
    mp[6]="abc";
    mp[8]="def";
    for(auto value:mp){
        cout<<value.first<<" "<<value.second<<endl;
    }
}