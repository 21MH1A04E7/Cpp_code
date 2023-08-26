#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float unit,bill;
    cout<<"enter your electricity bill consumption in units";
    cin>>unit;
    if(unit<50){
        bill=0.5*unit;
    }
    else
    if(unit<150){
        bill=(0.5*50)+(0.75*(unit-50));
    }
    else
    if(unit<250){
        bill=(0.5*50)+(0.75*100)+(1.2*(unit-150));
    }
    else
    {
        bill=(0.5*50)+(0.75*100)+(1.2*100)+(1.5*(unit-250));
    }
    cout<<"your total bill is:Rs "<<bill<<endl;


}