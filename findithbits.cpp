#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number "<<endl;
    cin>>n;
    cout<<"enter  the ith bits "<<endl;
    cin>>i;
    if((n&(1<<i))==0){//considering starting bits form zero opsition 
        cout<<"0 bits are present in the ith position"<<endl;
    }else{
        cout<<"1 bits are present in the ith position"<<endl;
    }

}