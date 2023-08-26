#include<iostream>
using namespace std;
class game{
  public:
  char level='A';
  int time=7;
};
class birds: public game{//single inheritance
  public:
  void start(){
    cout<<"let's start the game"<<endl;
    cout<<"level no : "<<this->level<<endl;
    cout<<"time left : "<<this->time<<endl;
  }
};
int main(){
    birds b;
    b.start();
}