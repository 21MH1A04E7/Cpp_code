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
            return true;
        }else{
            return false;
        }
    }else{
        if(a.second<b.second)//if a.first is equal to b.second then
        return true;//sort a.second and b.second in descending order
        return false;
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
    for(int i=0;i<n-1;i++){//sorting agorithm
        for(int j=i+1;j<n;j++){
            if(comparator_fun(a[i],a[j])){//calling comparator function
               swap(a[i],a[j]);
            }
        }
    }
    cout<<"priting after sorting "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}