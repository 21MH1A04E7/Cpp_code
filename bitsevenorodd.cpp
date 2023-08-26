#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&1)==0){
        cout<<"even number "<<endl;
    }else{
        cout<<"odd";
    }
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<" the a value is after the swaping  "<<a<<"  and the b value is "<<b;
}