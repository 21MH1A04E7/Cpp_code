#include<iostream>
using namespace std;
int fun(int n){
    int ans=0,c=1;
    while(n){
        int d=n%2;
        n/=2;
        ans+=(d*c);
        c=c*10;
    }return ans;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a bits is "<<fun(a)<<" b bits is "<<fun(b)<<endl;
    int mask=a^b;
    cout<<" mask bits is "<<fun(mask)<<endl;
    int c=0;
    while((mask)){
        mask=(mask&(mask-1));
        c++;
    }cout<<"it will take "<<c<<" times "<<endl;  
}