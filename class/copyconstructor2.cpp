#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class earth{
  int health;
  char level;
  
  public:
  char *name;
  earth(){
    cout<<"constructor called"<<endl;
    name =new char[100];
  }
  earth(int health,char level){
    cout<<"main constructor "<<endl;
    this->health=health;
    this->level=level;
  }
  //creating copy constructor :::::
  //earth(earth& temp){//copy constructor 
    //cout<<"copy consturctor is calling"<<endl;
      //this->health=temp.health;
      //this->level=temp.level;
 // }
 // if want to use default copy constructor makesure
 //comment out the copy constructor
  //note default constructor implements shallow copy
  void print(){
    cout<<endl;
    cout<<"[ "<<this->name<<" ";
    cout<<"health: "<<this->health<<"  ";
    cout<<"level: "<<this->level<<" ]"<<endl;
  }
  void sethealth(int health){
    this->health=health;
  }
  void setlevel(char level){
    this->level=level;
  }
  void setname(char *name){
    strcpy(this->name,name);
  }
  //in shllow copy concept we accessing  same memory with different name
  
};
int main(){
 earth hero;
 char name[7]="hariom";
 hero.sethealth(7);
 hero.setlevel('A');
 hero.setname(name);
 hero.print();
 earth hero2(hero);
 hero2.print();
 hero.name[0]='s';
 hero.print();
 hero2.print();
}