#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool cheak(int a[26],int b[26]){
    for(int i=0;i<26;i++){
     if(a[i]!=b[i])
     return 0;
    }return 1;
}
bool fun(string s1,string s2){
    int count1[26]={0};//count store in first array
    for(int i=0;i<s1.length();i++)
    {
        count1[s1[i]-'a']++;
    }
    int count2[26]={0};
    int i=0;
    int findsize=s1.length();
    while(i<findsize&& i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    } 
    if(cheak(count1,count2)){
        return 1;
    }
    while(i<s2.length()){
        char newchar=s2[i];
        int index=newchar-'a';
        count2[index]++;
        char oldchar=s2[i-findsize];
        index=oldchar-'a';
        count2[index]--;
        i++;
        if(cheak(count1,count2)){
        return 1;
        
    }return 0;
}
}  
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    if(fun(s1,s2))
    cout<<"true";
    else
    cout<<"false";
}