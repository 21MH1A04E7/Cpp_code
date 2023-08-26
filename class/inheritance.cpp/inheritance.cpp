#include<iostream>
using namespace std;
class human{
    //30
    //protected modifier:
    //we can access only inside of class but child class can access
   public:
   int height;
   int weight;
   int age=17;
   public:
   int getage(){
    return this->age;
   }
   void setweight(int weight){
    this->weight=weight;
   }
};
//inheritance:The capability of a class to derive properties and 
//characteristics from another class is called Inheritance.
//syntax of inheritance
//class childclass_name : modifier parent_class

class female: public human{//in short female class is inherit all the property of human
    public://female class is inheriting humans class
      int color;//when will be inheriting humans class
      //in this case female class will have its own properties
      //like height,weight etc
      void sleep(){
        cout<<"female sleeping"<<endl;
      }
};
int main(){
    human h;
    female f;
    cout<<f.age<<endl;
    f.sleep();
}