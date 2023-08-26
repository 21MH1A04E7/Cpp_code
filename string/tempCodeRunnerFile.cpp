#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int count(int n){
    int c=0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
       if(prime[i])
       {
        c++;
        for(int j=2*i;j<n;j=j+1){
            prime[j]=0;
        }

       }
    }
    return c;
}
int main(){
   int n;
   cin>>n;
   cout<<count(n);
}