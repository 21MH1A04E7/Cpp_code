#include<iostream>
using namespace std;
//implimentation of class
class Hero{
   //properties
   int level;//size 4 byte
   int health;//size 4 byte
};
int main(){
//creation of object
Hero h1;
cout<<"size of "<<sizeof(h1)<<endl;//total size of class is 8 byte
//notes if class is empty then size is 1 byte
}