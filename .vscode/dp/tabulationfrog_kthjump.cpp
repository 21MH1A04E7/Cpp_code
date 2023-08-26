#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>dp(n);
    dp[0]=0;
    return 0;
    int mini=INT_MAX;
    for(int j=1;j<n;j++){
        for(int i=1;i<=k;i++){
      int val;
       if(j-i>=0)
       val=dp[j-i]+abs(arr[j]-arr[j-i]);
       mini=min(mini,val);
    }
    dp[j]=mini;
    }
    cout<<dp[n-1];
    //5 3
    //10 30 40 50 20

}