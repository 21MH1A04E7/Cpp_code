#include<iostream>
using namespace std;
class earth{
  int health;
  char level;
  public:

  earth(){
    cout<<"constructor called"<<endl;
  }
  earth(int health,char level){
    cout<<"main constructor "<<endl;
    this->health=health;
    this->level=level;
  }
  //creating copy constructor :::::
  earth(earth& temp){
    //note when you write own copy constructor ,in this
    //case inbuild copy constructor will no more exits here
    cout<<"copy consturctor is calling"<<endl;
      this->health=temp.health;
      this->level=temp.level;
  }
  //default constructor implements shallow copy
  void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
  }

};
int main(){
    earth water(2,'a');
    water.print();
    earth land(water);//copy constuctor ...
    land.print();
}