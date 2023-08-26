#include<iostream>
using namespace std;
char toLower(char ch){
        if(ch>='A'&&ch<='Z')
            return ch-'A'+'a';
        return ch;
    }
int main(){
    string s;
    cin>>s;
    string temp="";
        for(int i=0;s[i]!='\0';i++){
          temp.push_back(toLower(s[i]));
        }
   cout<<temp;
}