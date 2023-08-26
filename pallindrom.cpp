#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool remo(char temp){
    if((temp>='a'&&temp<='z')||(temp>='A'&&temp<='Z')||(temp>='0'&&temp<='9')){
        return 1;
    }return 0;
}
char toLower(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
    return ch;
    else{
        return ch-'A'+'a';
    }
}
int palin(string s,int n){
    string temp="";
    for(int i=0;i<s.size();i++){
        if(remo(s[i]))
        temp.push_back(toLower(s[i]));
    }
    cout<<temp<<endl;
    int i=0,sr=temp.length()-1;
    while(i<sr){
        if(temp[i++]!=temp[sr--])
        return 0;
    }return 1;
}
int main(){
    string s;
    cin>>s;
    int n=s.size();
    if(palin(s,n))
    cout<<"palindrom";
    else
    cout<<"not palindrom";
}