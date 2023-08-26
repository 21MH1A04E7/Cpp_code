#include<iostream>
using namespace std;
int main()
{
  string str;
  cin>>str;
  int a[26]={0};
  for(int i=0;i<str.length();i++){
    if(a[str[i]-'a']==0){
      a[str[i]-'a']=1;
      cout<<str[i];
    }
  }
  
} 
