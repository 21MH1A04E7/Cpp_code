#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="hairom";
    //used to append in the string
    str.append(" kumar");
    cout<<str;
    str.clear();
    //used to clear the string 
    cout<<str<<endl;
    //array of strings
    // [apple juice,mango jucie,grape juice]
    string st="hariom k";
    cout<<st.substr(1,4)<<endl;
    //string strtok
    char a[100]="i love to do coding";
    char *ptr=strtok(a,",");
    cout<<ptr<<endl;
     char *ptr1=strtok(NULL,",");
    cout<<ptr1;
    // while(ptr!=NULL){
    //     cout<<ptr<<endl;
    // }
    while(ptr!=NULL){
        ptr = strtok ( NULL , "," );
        cout<<ptr<<endl;
    }
}