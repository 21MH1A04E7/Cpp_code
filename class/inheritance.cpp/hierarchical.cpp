#include<iostream>
using namespace std;
class A{
  public:
  int a;
  void fun1(){
    cout<<"calling class A"<<endl;
  }
};
class B:public A{//hierarchical inheritace
    public:
  int b;
  void fun2(){
    cout<<"calling class B"<<endl;
  }
};
class C:public A{
    public:
  int c;
  void fun3(){
    cout<<"calling classs C"<<endl;
  }
};
int main(){
  C obj;
  obj.fun1();
  obj.fun3();
}