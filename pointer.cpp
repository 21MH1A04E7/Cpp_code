#include<iostream>
using namespace std;
int main(){
   int N;
   cin>>N;
   int ans=0;
    int c=1;
    while(N){
        int r=N%2;
        ans=ans+(c*r);
        c=c*10;
        N=N/2;
    }
    cout<<ans;
}