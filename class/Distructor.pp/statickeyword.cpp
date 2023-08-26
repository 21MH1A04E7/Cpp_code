#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class room{
   int health;
   char level;
   public:
   static int time;//we will have to initialized 
   char *arr;
   room(){
      cout<<"constructor call "<<endl;
    arr=new char[100];
   }
   room(int health ,char level){
      this->health=health;
      this->level=level;
   }
   room(room& temp){
      char *ch=new char[strlen(temp.arr)+1];
      strcpy(ch,temp.arr);
      this->arr=ch;
      this->health=temp.health;
      this->level=temp.level;
   }
   void print(){
      cout<<" "<<this->arr<<" "<<this->health;
      cout<<" "<<this->level<<endl;
   }
   void sethealth(int health){
    this->health=health;
   }
   void setlevel(char level){
    this->level=level;
   }
   void setarr(char *arr){
    strcpy(this->arr,arr);
   }
   ~room(){//creating distructor 
      cout<<"distructor is calling"<<endl;
   }
};
//note initialise the static data type
//syntax datatype classname :: filedname = value;
//:: nothing but scope resolution operator
int room :: time=5;
int main(){
     //static keyword created such type of data member which belong to class
     //it means to access no need to meke object
     cout<<room::time<<endl;//access 
     //room b;
     //cout<<b.time<<endl;//accessing by creating object;
     //room d;
     //cout<<d.time<<endl;
     //cout<<room::time<<endl;
     room c;
     c.time=10;
     cout<<room::time<<endl;
     cout<<c.time<<endl;//it will call in last 
}