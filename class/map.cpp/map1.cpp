#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
   // cout<<"size of map"<<m.size()<<end;
    for(auto &value:m){
        cout<<value.first<<" "<<value.second<<endl;
    }

}
int main(){
    //map is datastructure in cpp which store the key value pair
    //it will help to creat the mapping
    //normal map will always store the value in sorted orderd
    //it is not continuous nature 
    //we can't do +1 ,only we can ++;
    //key value is unique;
    map<int,string>m;//normal map
    m[1]="abc";
    m[5]="bce";
    m[3]="cdc";
    m.insert({4,"afg"});
    //map<int,string> :: iterator it;
    //for(it=m.begin();it!=m.end();it++){
      //cout<<(*t).first<<" "<<(*it).second;
    //}
    print(m);
}