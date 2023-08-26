#include<iostream>
using namespace std;
class game{
  public:
  char level='A';
  int time=7;
};
class birds: public game{//single inheritance
  public:
  int entercode=6;
  void start(){
    cout<<"let's start the game"<<endl;
    cout<<"level no : "<<this->level<<endl;
    cout<<"time left : "<<this->time<<endl;
  }
};
class kiwi: public birds{
    public:
    void print(){
        cout<<"entery code is "<<entercode<<endl;
        start();
    }
};
int main(){
    birds b;
   // b.start();
    kiwi k;
    k.print();
}