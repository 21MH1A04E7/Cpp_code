#include<iostream>
using namespace std;
class Hero{
   public:
    //compile-time polymorphism is achieved by function overloading 
    //or operator overloading.
    void funtion(){
        cout<<"fun is without parameter"<<endl;
    }
    void funtion(int n){//funtion overloading with defferent parameter
        cout<<"fun is with parameter"<<endl;
    }
    void funtion(char n){//funtion overloading with defferent parameter
        cout<<"fun is with different parameter "<<endl;
    }
    //operator overloading
    //syntax for operator overload
    //returntype operator+(input argument)
};
class B{
    //a+b
    //b is input
    //a is current object
  public:
  int a;
  int b;
  void operator+ (B &obj){
    int val1=this->a;
    int val2=obj.a;
    cout<<"output  "<<val2-val1<<endl;
    //cout<<"calling by operator overloading"<<endl;
  }
  void operator() (){
    cout<<"this is called by bracket "<<this->a<<endl;
  }
};
int main(){
    //polymorphism-> polymorphism means having many forms.we candefine 
    //polymorphism as the ability of a message to be displayed in more than one form
    //two type of polymorphism are there
    //compile-time polymorphism 
    //run-time polymorphism
     Hero h;
     h.funtion(9);
     B obj1,obj2;
     obj1.a=4;
     obj2.a=7;
     obj1+obj2;
     obj1();
}