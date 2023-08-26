#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool comparator_fun(int a,int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),comparator_fun);
    cout<<"printing after sorting "<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
}