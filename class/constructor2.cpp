#include<iostream>
using namespace std;
class human{
    public:
    int health;
    int level;
    char ch;
    human(){
        cout<<"constructor called"<<endl;
    }
    human(int health){//parameterised constructor
    cout<<"this constructor"<<endl;
    cout<<"address of this "<<this<<endl;
        this->health=health;//this health mean class health variable
    }
    human(int level,char ch){
        cout<<"A constructor"<<endl;
        this->level=level;
        this->ch=ch;
        cout<<ch<<endl;
        cout<<"address of "<<this<<endl;
    }
};
int main(){
  human h(1);
  cout<<&h<<endl;
  human obj(4,'A');
  cout<<&obj<<endl;
}