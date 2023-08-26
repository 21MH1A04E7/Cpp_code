#include<iostream>
using namespace std;
class Collage{
  public:
  int rollno;
  int classroom;
  Collage(int rollno,int classroom){
    this->classroom=classroom;
    this->rollno=rollno;
  }
  //creating copy constructor 
  Collage(Collage& temp){
    cout<<"copy constructor called"<<endl;
    this->rollno=temp.rollno;
    this->classroom=temp.classroom;
  }
};
int main(){
    Collage obj(4,6);
   cout<<obj.rollno<<" ";
   cout<<obj.classroom<<endl;
   //copy constructor
   Collage h(obj);
   //cout<<h.classroom<<endl;
}