#include<iostream>
#include<string>
using namespace std;
void fun(string str){
    str.clear();
    cout<<str;
    return ;
}
int main(){
string str;
getline(cin,str);
cout<<str;
fun(str);
}