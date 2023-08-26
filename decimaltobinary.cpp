#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number for binary"<<endl;
    cin>>n;
    int res=0,c=1;
    while(n){//n=10
        int d=n%2;//n%2=0
        n=n/2;//n/2=5
        res=res+(c*d);//0+1*0
        c=c*10;//c*1
    }
    cout<<"the binary number of given number is "<<res;
}