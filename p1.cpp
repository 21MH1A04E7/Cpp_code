#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<"not power of five";
    }
    int c=1;
    while(n!=1){
      if(n%5!=0)
      {
        c=0;
        break;
      }
      n=n/5;
    }
    if(c==1)
    cout<<"power of five";
    else
    cout<<"not power of five";
}