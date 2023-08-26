#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 int fun(int *arr,int sum,int n,vector<vector<int>>&dp){
    if(sum==0)
     return 1;
    if(n==0&&sum!=0)
    return 0;
     if(dp[n][sum]!=-1){
        return dp[n][sum];
     }
     if(arr[n-1]<=sum){
         return dp[n][sum]=fun(arr,sum,n-1,dp)+fun(arr,sum-arr[n-1],n-1,dp);
     }
     if(arr[n-1]>sum){
         return dp[n][sum]=fun(arr,sum,n-1,dp);
     }
}
int main()
{
    int n;
    cin>>n;
    cout<<"sum"<<" ";
    int sum;
    cin>>sum;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>dp(n+1,vector<int>(sum+1));
    for(int i=1;i<sum+1;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][sum];
}