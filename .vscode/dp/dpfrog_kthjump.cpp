#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int index,int *arr,int k,int *dp){
    if(index==0)
    return 0;
    if(dp[index]!=-1)
    return dp[index];
    int mini=INT_MAX;
    for(int i=1;i<=k;i++){
      int val;
       if(index-i>=0)
       val=fun(index-i,arr,k,dp)+abs(arr[index]-arr[index-i]);
       mini=min(mini,val);
    }
    return dp[index]=mini;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int *arr=new int[n];
    int dp[n];
    for(int i=0;i<n;i++){
        dp[i]=-1;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<fun(n-1,arr,k,dp);
    //5 3
    //10 30 40 50 20

}