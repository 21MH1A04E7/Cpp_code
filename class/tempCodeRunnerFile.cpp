#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class hero{
    int health;
    char level;
    public:
    char *name;
    hero(){
        name=new char[100];
        cout<<"default constructor "<<endl;
    }
    hero(hero& temp){//copy constructor 
    char *ch=new char[strlen(temp.name)+1];//created a new array
      strcpy(ch,temp.name);//dip copy        
      this->name=ch;//it copy of array .here memory is not sharing  
      this->health=temp.health;
      this->level=temp.level;

    }
   // hero(int helath,char ch){
    //    this->health=health;
      //  this->level=level;
    //}
    void print(){
        cout<<"[ "<<this->name<<" ";
        cout<<this->health<<" ";
        cout<<"health: "<<this->level<<" ]"<<endl;
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
};
int main(){
  hero h;
  h.sethealth(45);
  h.setlevel('A');
  char name[]="hariom";
  h.setname(name);
  h.print();
  hero b(h);
  b.print();
  h.name[0]='A';
  h.print();//value is changed
  b.print();//value is not change .because is it copy
  
}