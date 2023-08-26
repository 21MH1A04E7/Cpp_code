#include<iostream>
using namespace std;
class Employ{
   private:
   int salary;
   int age;
   public:
   int  getage(){
    return this->age;
   }
};
int main(){
    //encapsulation means wrapping of data members and function
    //those class have, all data memeber are private marked  called fully encapsulated 
    //why we need encapsulation->data hiding
    //1 we can hide our data by encapsulation
    //2  if we want ,we can make a class read only
    //3 code reusebality
    //4 unit testing
     Employ h;
     
}