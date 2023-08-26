#include<iostream>
using namespace std;
class vehical{
    //here default constructor has created
    //constructor is invoked at the time of object creation;
  public:
  int v;
  vehical(){//note It is used to initialize the data members of new objects generally. 
  //The constructor in C++ has the same name as the class or structure. 
    cout<<"constructor called "<<endl;
  }//once we write constuctor in this case the default 
  //constructor will be remove
};
int main(){
  vehical *h=new vehical;//constructor invoked 
  h->v=5;
  cout<<h->v<<endl;
  vehical bike;//constructor invoked

}