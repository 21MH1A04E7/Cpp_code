#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    //lower_bound and upper_bound will work on key (in map)
    auto it=s.lower_bound(2);//in set case lower_bound fuction work like this
    cout<<*it<<endl;
    auto p=s.lower_bound(5);
    cout<<*p<<endl;
    cout<<"printing the set "<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }

}