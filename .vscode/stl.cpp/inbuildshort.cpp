#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());//fist address and last address next last iterator
    //intro sort (it is combination three sort quick sort,heap sort and insertion sort )
    //descending order mean 
    //worst case complexity is n(log(n))
    //sort(v.begin(),v.end(),greater<int>());
    cout<<"printing the element"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
}