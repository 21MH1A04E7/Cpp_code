#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   unordered_set<string>s;//it will not maintain order the time 
   //complexity is o(1) 
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    string str;
    cin>>str;
    s.insert(str);//inserting the value
   }
   for(string it:s){
    cout<<it<<" ";
   }
}