#include<iostream>
using namespace std;
class animal{//first class
   public:
   int n;
   void brak(){
    cout<<"braking "<<endl;
   }
};
class human{//second class
   public:
   int num;
   void speak(){
    cout<<"speaking "<<endl;
   }
};
class hybrid: public animal,public human{
    //mutiple inheritance 
    //it's invoking both class properties
      public:
      int no=5;
};
int main(){
    hybrid h;
    h.brak();
    h.speak();
}