#include<iostream>
using namespace std;
int fun(int n){
    int c=1,ans=0;
    while(n){
        int d=n%2;
        n=n/2;
        ans=ans+(d*c);
        c=c*10;
    }
    return ans;
}
int main(){
    int n,i;
    cout<<"ente the number"<<endl;
    cin>>n;
    cout<<fun(n)<<endl;
    cout<<"set bits at ith position "<<endl;
    cin>>i;
    int mask=1<<i;
    int set=(n|mask);  
    cout<<fun(set)<<endl;
    int ith;
    cout<<"clear the bits"<<endl;
    cin>>ith;
    int num=(set&(~(1<<ith)));
    cout<<fun(num)<<endl;
}