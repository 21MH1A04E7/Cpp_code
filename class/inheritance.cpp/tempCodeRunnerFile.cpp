#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class A{
  public:
  int a;
  void fun(){
    cout<<"calling class A"<<endl;
  }
};
class B{//scope resulation operator ::
    public:
  int b;
  void fun(){
    cout<<"calling class B"<<endl;
  }
};
class C:public A,public B{
    public://A and B class have same funtion 
    //then we will use scope resulation
  int c;
  void func(){
    cout<<"calling classs C"<<endl;
  }
};
int main(){
   C obj;
   obj.A::fun();//scope resulation ,fun A will be call
   obj.B::fun();//fun B will be call
   obj.func();
}