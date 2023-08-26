#include<iostream>
using namespace std;
class hii{
    private:
    int health;
    
public:
char level;
//setter are using to set the value:
void sethealth(int n){
        health=n;
    }
    //getter are using to set the value:
    int getheath(void){
        return health;
    }
};
int main(){
hii obj;
  obj.level='A';
  //access the setter
  obj.sethealth(78);
  //print the getter
  cout<<obj.getheath()<<endl;
  cout<<obj.level<<endl;
}