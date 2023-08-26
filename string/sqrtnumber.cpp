#include<iostream>
using namespace std;
int fun(long long int  n){
    int s=0,ans;
    int e=n;
    while(s<=e){
        long long int  mid=s+(e-s)/2;
        if(mid*mid<=n)
        ans=mid;
        if(mid*mid>n)
        e=mid-1;
        else
        s=mid+1;
    }return ans;
}
double dec(int n,int pre,int tempsol){
    double fac=1;
    double ans=tempsol;
    for(int i=1;i<=pre;i++){
        fac=fac/10;
        for(double j=ans;j*j<n;j+=fac){
             ans=j;
        }
    }return ans;

}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int precision;
    cout<<"enter the precision"<<endl;
    cin>>precision;
    int tempsol=fun(n);
    cout<<"answer is "<<dec(n,precision,tempsol)<<endl;
}