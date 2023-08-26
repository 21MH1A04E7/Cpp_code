#include<iostream>
using namespace std;
//funtion overriding
//rule for funtion overrding
//1 funtion name of parent class and child class must be same
//2 funtion of parent class and child class must be have same parameter
//3 it possible through inheritance only 
class animals{
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};
class dog: public animals{
      public:
      void speak(){//method overriding 
        cout<<"braking "<<endl;
      }
};
int main(){
  dog obj; 
  obj.speak();
}