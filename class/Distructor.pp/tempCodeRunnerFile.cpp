#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class room{
   int health;
   char level;
   public:
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
int main(){
     //destructor :it de-allocate the memory(free memory)
     //desturctor: having no data type ,no parameter ans 
     //no return data type
     //destructor name is same as class name
     //while the creating the class destructor is allomatically allocated
     //for destructor we are using this(~) particular sign
     //distructor will be automatically call for static allocation 
     //for dynamic allocation you have to call distructor manually
     //const keyword ,initialisation list
     room h;//static allocation 
     room c;//static allocation
     room *b=new room;//dynamically allocation 
    delete b; 
}