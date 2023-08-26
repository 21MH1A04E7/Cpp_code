#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(int a,int b){//comparator function code
    if(a>b)
    return true;
    return false;
}
bool pair_comparator(pair<int,int> a,pair<int,int>b){//comparator function 
    if(a>b)
    return true;
    return false;
}
bool comparator_fun(pair<int,int>a ,pair<int,int>b){
    if(a.first!=b.first){
        if(a.first>b.first){//sorting if a first is not equal to b first
            return false;//behaviour is opposite
            //if you want to swap the return false;
        }else{
            return true;
        }
    }else{
        if(a.second<b.second)//if a.first is equal to b.second then
        return false;//sort a.second and b.second in descending order
        return true;
    }
}
bool newfun(pair<int,int>a,pair<int,int>b){
    if(a.first!=b.first){
        return a.first<b.second;//simple which order u want to sort you have to return in that order 
    }else{
        return a.second>b.second;
    }
}
int main(){
    //vector of pair
    int n;
    cin>>n;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end(),newfun);
    cout<<"priting after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}