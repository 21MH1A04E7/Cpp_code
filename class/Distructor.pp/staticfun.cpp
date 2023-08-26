#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class room{
   int health;
   char level;
   public:
   static int time;
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
   static int  fun(){//it is static function
   //we can access only static variable
   //we can't use this keyword for this because this keyword poiting current object
    //static function can acess only static member
    return time;
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
//first i have to initialize the static variable
int room :: time=10; //initialize
int main(){
    cout<<room::time<<endl;//accessing static member
    //for accessing of static member no need to create the object
}