#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=*min_element(v.begin(),v.end());//it will return minimum element of pointer
    cout<<"minimum of vector "<<min<<endl;
    int max=*max_element(v.begin(),v.end());//it will return maximum element of pointer
    cout<<"maximum element of vector "<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);//sum of all element present in array or vector
    //starting address and next of last address and initial sum
    cout<<"sum of vector "<<sum<<endl;
    //count of element
    int ct=count(v.begin(),v.end(),2);
    cout<<"count is "<<ct<<endl;
    //find function
    auto it=find(v.begin(),v.end(),2);
    if(it!=v.end()){
        cout<<*it<<endl;
    }else{
      cout<<"element not found "<<endl;
    }
    //reverse vector
    reverse(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    //example 
    string str="abacdefgh";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}